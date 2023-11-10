#include<stdio.h>

void ref1(int x[],int s );

main()
{
   int arr[6]={1,2,3,4,5,6};
   ref1(arr,6); //function call which is having parameter as an array
   	
}

void ref1(int x[],int size)
{
	int i;
	for(i=0;i<6;i++)
	printf("%d",x[i]);
}
