#include<stdio.h>
#include "header.h"
#include<string.h>
#define clear() printf("\033[H\033[J")
void main()
{	
	char s[1000]="_";
	for(int i=0;i<25;i++)
	{
		printf("%s           *******\n",s);
		printf("%s               ****\n",s);
		printf("%s                *****\n",s);	
		printf("%s                 ******\n",s);	
		printf("%s  **              *******\n",s);	
		printf("%s   ***             ********\n",s);	
		printf("%s    ****          ***********\n",s);	
		printf("%s /**************************************\\\n",s);	
		printf("%s|*****************************************\n",s);
		printf("%s \\**************************************/\n",s);
		printf("%s    ****          ***********\n",s);	
		printf("%s   ***             ********\n",s);	
		printf("%s  **              *******\n",s);	
		printf("%s                 ******\n",s);	
		printf("%s                *****\n",s);	
		printf("%s               ****\n",s);	
		printf("%s           *******\n",s);
		strcat(s,"      ");
		sleep(1000);
		clear();		
	}
	printf("\n\n\t\t\t\tWelcome to flight reservation system:\n\n\n");
	char optn='\0';
	for(;optn!='q';)
	{
		printf("Enter 1 for seat booking:\n");
		printf("Enter 2 for ADMIN login:\n");
		printf("Enter q to exit:");
		scanf("%c",&optn);
		switch(optn)
		{
			case '1':
				booking();
				break;
			case '2':
				admin();
			case 'q':
				break;
			default:
				printf("\n\n\t\t\tInvalid Entry!!\n");
		}				
		printf("\n\n");
		clear();
	}
}
