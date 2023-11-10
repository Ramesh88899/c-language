#include<stdio.h>
#include<string.h>
struct student
{
	char name[20];
	int rollno;
    float cgpa ;	
}; s2;s3;s4;
main()           
/*{
	struct student s1;
	strcpy(s1.name,"ramesh");
	s1.rollno=39;
	s1.cgpa=7.2;
	
	printf("name=%s \nrollno=%d \n cgpa=%f \n",s1.name,s1.rollno,s1.cgpa);
}*/


{
struct student s1;
gets(s1.name);
scanf("%d",&s1.rollno);
scanf("%f",&s1.cgpa);
puts(s1.name);

	printf("rollno=%d \n cgpa=%f \n",s1.rollno,s1.cgpa);

}
