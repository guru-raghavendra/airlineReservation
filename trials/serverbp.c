#include<stdio.h>
#include<stdio_ext.h>
#include<string.h>
int nf=0;
char stda[100][5][100];
void main()
{	char seats[121][100]={"A11","A12","A13","A14","A15","A16","B11","B12","B13","B14","B15","B16","C11","C12","C13","C14","C15","C16","D11","D12","D13","D14","D15","D16","E11","E12","E13","E14","E15","E16","F11","F12","F13","F14","F15","F16","G11","G12","G13","G14","G15","G16","H11","H12","H13","H14","H15","H16","I11","I12","I13","I14","I15","I16","J11","J12","J13","J14","J15","J16","K11","K12","K13","K14","K15","K16","L11","L12","L13","L14","L15","L16","M11","M12","M13","M14","M15","M16","N11","N12","N13","N14","N15","N16","O11","O12","O13","O14","O15","O16","P11","P12","P13","P14","P15","P16","Q11","Q12","Q13","Q14","Q15","Q16","R11","R12","R13","R14","R15","R16","S11","S12","S13","S14","S15","S16","T11","T12","T13","T14","T15","T16"};
	char c='*';
	char adminid[]="admin@123.com\n";
	char password[]="ADMIN\n";
	char aid[100],psw[100];
	printf("Enter admin id:");
	scanf("%s",aid);
	__fpurge(stdin);
	printf("Enter the password:");
	scanf("%s",psw);
	if(strcmp(adminid,aid) && strcmp(password,psw))
	{	char ch=' ';
		__fpurge(stdin);
		while(ch!='q')
		{	
			printf("To add new flights enter 1:\n");
			printf("To view all the flights enter 2:\n");
			printf("To quit enter q:");
			scanf("%c",&ch);
			if(ch=='1')
			{	__fpurge(stdin);
				FILE *ptr=fopen("allflight.txt","a");
				char stdata[5][100];
				char totaldata[100]="";
				printf("Enter the name of the flight, from, to, date, time :\n");
				for(int i=0;i<=4;i++)
				{	scanf("%s",stdata[i]);
					if(i==0)
					{
						FILE *fp=fopen(stdata[0],"w");
						for(int k=0;k<120;k++)
						{fputs(seats[k],fp);
						 fputs(" ",fp);}
					fclose(fp);						
					}
				}
				for(int i=0;i<5;i++)
				{	
					strcat(totaldata,stdata[i]);
					strcat(totaldata," ");
				}
				fputs(totaldata,ptr);
				fclose(ptr);
			}
			else if(ch=='2')
			{	char c1;
				FILE *fp=fopen("allflight.txt","r");
				char s[1000];
				int i=0;
				while((c1=fgetc(fp))!=EOF)
				{
					s[i]=c1;
					i++;
				}
				printf("%s\n\n\n",s);
				__fpurge(stdin);
				fclose(fp);
			}
				
		}
	}
}
void mainn()
{	
	char c1;	
	FILE *fp1=fopen("allflight.txt", "r");
	char s[1000];
	int i=0;
	while((c1=fgetc(fp1))!=EOF)
	{
		s[i]=c1;
		i++;
	}
	char fd1[100][100];
	char *fltdata=strtok(s," ");
	char fltd[100][100];
	i=0;
	while(fltdata!=NULL)
	{	int j=0;
		while(*(fltdata+j)!='\0')
		{fltd[i][j]=*(fltdata+j);j++;
		}
		i++;	
		fltdata=strtok(NULL," ");
	}
	int optn=0;
	printf("To search for the flight based on Name enter 1:\n");
	printf("To search for the flight based on the origin and destination enter 2:\n");
	scanf("%d",&optn);
	char planename[100];
	char plnp[100];
	if(optn==1)
	{	int flag=0;
		scanf("%s",planename);
		for(int k=0;k<i;k++)
		{
			if(strcmp(planename,fltd[k])
			{
				strcpy(plnp,fltd[k]);
				flag=1;
				break;
			}
		}
		if(flag)
		{printf("No flight Available");}
		else
		{
			printf("\n\n\t\tPlease select your Seat");
			seat(plnp);
	}	 
		
				
	
}

void seat()
{
	char fn[]="Plane1";
	FILE *f=fopen(fn,"r");
	char s[1000]="";
	char c1;
	int i=0;
	int ns=0;
	while((c1=fgetc(f))!=EOF)
	{
		s[i]=c1;
		i++;
	}
	int sc=0;
	char *allseat=strtok(s," ");
	char als[100][100];
	i=0;
	int test=1;
	while(allseat!=NULL)
	{	int j=0;
		while(*(allseat+j)!='\0')
		{als[i][j]=*(allseat+j);j++;
		}
		i++;	
		allseat=strtok(NULL," ");
	}
	for(;sc<96;sc++)
	{	
		printf("					|");
		for(int sr=0;sr<6;sr++)
		{	
			printf("%s ",als[sc]);
			if(sr!=5){sc++;}
		}
		printf("|\n");
		printf("					|			 |\n");
		printf("					|			 |\n");
		
	}
		

	printf("Enter the number of seats");
	scanf("%d",&ns);
	char seat[120][100];
	for(i=0;i<ns;i++)
	{
		scanf("%s",seat[i]);
	}
	for(int k=0;k<ns;k++)
	{
		for(int j=0;j<120;j++)
		{	char f[100];
			strcpy(f,als[j]);
			if(!strcmp(seat[k],als[j]))
			{	printf("\n:%s:, :%s:",als[j],seat[k]);
				strcpy(als[j],"***");
			}	
		}
	}
		FILE *fp=fopen("Plane1","w");
	for(int k=0;k<120;k++)
		{fputs(als[k],fp);
		 fputs(" ",fp);}
	fclose(fp);
	
}














	
