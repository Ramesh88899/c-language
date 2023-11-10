#include<stdio.h>
main()
{
	int a[5]={9,8,7,6,5};
	int i , loc=-1, key, n=5;  // here n is the number of element
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	key=3; // this is the value which you want at search
	
	for(i=0; i<n; i++)
	     {
	     	if (a[i]== key);
	     	{
	     	  loc=i;
			   //break;	
			 }
	     	  
		 }
		 if (loc=-1)
		 {
		 	printf("\n element found  at location %d",loc+1);
		 }
		 else
		 {
		 	printf("\n element not found");
		 }
	
} 
