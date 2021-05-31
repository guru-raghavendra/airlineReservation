#include<stdio.h>
int main(char flightcode[100])
{
	char num[100];
	FILE *fptr;
	fptr=fopen(flightcode.txt,"r");
	while((ch=fgetc(fptr))!=EOF)
	{
		if(ch==' ')
		{
			num1=int(num);
			num="";
		}
		else
		{
			num=num+ch;
		}
	        
		
