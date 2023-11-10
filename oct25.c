/*#include<stdio.h>
main()
{
	int a[5];
	int *ptr, i;
	ptr=a;
	printf("enter the elements");
	for (i=0; i<5;i++)
	{
		scanf("%d",ptr+i);
	}
	printf("\n the elements are:");
	for(i=0; i<5;i++)
	{
	printf("%d",*(ptr+i));	
	}
	
}*/


#include<stdio.h>
main()
{
    int a[3]={4,5,6};
	  
	int *ptr[3],i;
	
	for(i=0; i<3; i++)  	
	{
		ptr[1]=&a[1];
	
	}
	printf("print the elements using pointer \n");
	for(i=0; i<3; i++)
	{
		printf("%d", *ptr[i]);
	}
	
}

