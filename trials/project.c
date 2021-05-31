#include<stdio.h>
#include<string.h>
void main()
{
	FILE *ptr=fopen("allflight.txt","a");
	char name[5][100];
	char from[20];
	char to[20];
	char date[20];
	char time[20];
	printf("Enter the name of the flight, from, to, date, time :\n");
	scanf("%s",name);
	scanf("%s",from);
	scanf("%s",to);
	scanf("%s",date);
	scanf("%s",time);	
	strcat(total,name);
	strcat(total,from);
	strcat(total,to);
	strcat(total,date);
	strcat(total,time);
	strcat(total,"\n");
	printf("%s\n",total);
	printf("%s",name);
	fputs(total,ptr);
}
