#include<stdio.h>
#include<stdlib.h>

struct Birthday{
	int day,month,year;
}; 
typedef struct Student{
char name[20];
	int num;
	struct Birthday birthday;
}stu;

int main()

{
	stu stu1;
stu *stu2;
stu s2;
stu2=&s2;
	printf("please input:");
	scanf("%s%d%d",&stu1.name,&stu1.num,&stu1.birthday);
	printf("%s %d  %d \n",stu1.name,stu1.num,stu1.birthday);
	printf("另一名学生：");
	 scanf("%s%d%d",&stu2->name,&stu2->num,&stu2->birthday);
	printf("%s %d  %d \n",stu2->name,stu2->num,stu2->birthday);
	
	return 0;
}
