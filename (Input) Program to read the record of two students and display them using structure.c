#include<stdio.h>
struct student{
int rollnumber;
char name[32];
char branch[12];
float marks;
};
int main(){
struct student s1;
printf("enter rollnumber");
scanf("%d",&s1.rollnumber);
printf("enter name:");
fflush(stdin);
gets(s1.name);
printf("enter branch:");
gets(s1.branch);
printf("enter marks:");
scanf("%f",&s1.marks);
printf("rollnumber=%d\n",s1.rollnumber);
printf("name=%s\n",s1.name);
printf("branch=%s\n",s1.branch);
printf("marks=%f\n",s1.marks);
struct student s2;
printf("enter rollnumber");
scanf("%d",&s2.rollnumber);
printf("enter name:");
fflush(stdin);
gets(s2.name);
printf("enter branch:");
gets(s2.branch);
printf("enter marks:");
scanf("%f",&s2.marks);
printf("rollnumber=%d\n",s2.rollnumber);
printf("name=%s\n",s2.name);
printf("branch=%s\n",s2.branch);
printf("marks=%f\n",s2.marks);
return 0;
}