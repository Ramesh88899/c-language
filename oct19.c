#include<stdio.h>
void swap1(int* , int*);
main()
{
	int a=7,b=9;
	printf("before swapping values of a=%d b=%d \n ", a,b);
	swap1(&a,&b);
	printf("after swap in main , values of a=%d b=%d \n ", a,b );
}
void swap1(int *x, int *y)
{
	int temp;
	int *ptemp=&temp;
	*ptemp=*x;
	*x=*y;
	*y=*ptemp;
	printf("values of a= %d b=%d \n",*x, *y);
}
