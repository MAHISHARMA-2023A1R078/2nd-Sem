//write a c program to find maximum of three numbers using nested if.
#include<stdio.h>
int main()
{
int a,b,c,big;
printf("enter the three numbers");
scanf("%d%d%d",&a,&b,&c);
if(a>b){
if(a>c)
printf("the greatest number is=%d",a);
else
printf("the greatest number is=%d",c);
}
else{
if(b>c)
printf("the gratest number is=%d",b);
else{
printf("the greatest number is=%d",c);
}
}
}