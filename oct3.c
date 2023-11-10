#include<stdio.h>

void ref1(int x[],int s );

main()
{
	int arr[6]={6,5,4,3,2};
	ref1(arr,5);
	
}

void ref1(int x[],int size)
{
	
	print("%d",x[0]);
}
