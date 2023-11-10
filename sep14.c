#include<stdio.h>
/*
void fun1()

{
	auto int a=10;
	printf("\n value of a in fun 1 is %d,a");

}
void fun2()
{
	auto int a=12;
	printf("\n value of a in fun2 is %d",a);
}
main()
{
	fun1();
	fun2();
}*/




/*
main()
{
	register int i=10;
	printf ("i=%d",i);
}
*/



/*
extern int a=10;
main()
{
printf(" value of global a inside main %d",a);
}
{
	int a=90;
printf(" value of global a inside main %d",a);
}
*/



extern int a=10;
fun1()
{
	printf("\n value of global a inside fun1 %d",a);
	a++;

}
fun2()
{
	static int a=5;
	printf("\n value of global a inside fun2 %d",a);
	a++;
	
}
main()
{
fun1();
fun1();
fun1();
fun2();
fun2();
fun2();
}











	
