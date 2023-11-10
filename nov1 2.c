#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char s1[60]="lovely professional uni";
	char s2[60];

	//strcpy(s2,s1);
	strncpy(s2,s1,10);
	printf("content after cpy s1 inot s2 is %s \n",s2);
	
	
	
	
}
