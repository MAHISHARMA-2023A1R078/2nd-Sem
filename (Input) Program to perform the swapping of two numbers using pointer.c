#include<stdio.h>
int main(){
int a,b;
int *p1=&a,*p2=&b;
printf("enter two numbers:");
scanf("%d%d",p1,p2);
printf("before swapping a=%d and b=%d\n",a,b);
int z=*p1;
*p1=*p2;
*p2=z;
printf("after swapping a=%d and b=%d\n",a,b);
return 0;
}