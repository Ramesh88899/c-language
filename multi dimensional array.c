#include<stdio.h>
main()
{
	int i,j;
int a[2][2]={{1,2},{3,4}};
int a1[2][2]={2,3,4,5};
int a2[2][2]={{1},{3,4}};
int a3[2][2]={0};
int a4[2][2]={1,2,3};

printf("show the elements of the arrays \n");
for(i=0;i<2;i++)
{
	for (j=0;j<2;j++)
	{
		printf("%d", a4[i][j]) ;
	}
	printf("\n");
}

}
