#include<stdio.h>
main()
{
	int i=1;
	int count=0;
	while (i<=500)
	{
		if(i%2==0)
		{
			printf("%d\t",i);
			count ++;
			i++;
		}
	}
	printf("total count is=%d",count);
}
