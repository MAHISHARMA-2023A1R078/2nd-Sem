#include<stdio.h>
#pragma pack(1)
struct student{
int rollnumber;
char name[32];
char branch[12];
float marks;
};
int main(){
struct student s1={12001,"Andy Smith","IT",500.00};
printf("rollnumber=%d\n",s1.rollnumber);
printf("Name=%s\n",s1.name);
printf("branch=%s\n",s1.branch);
printf("Marks=%f\n",s1.marks);
return 0;
}