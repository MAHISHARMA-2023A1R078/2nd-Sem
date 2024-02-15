//Write a c program to create a simple calculator by calling user defined function through switch cases.
#include<stdio.h>
double add(double a , double b)
{
return a+b;
}
double sub(double a, double b){
return a-b;
}
double mul(double a, double b){
return a*b;
}
int mod(int a, int b){
return a%b;
}
double div(double a ,double b){
if(b!=0){
return a/b;
}
else{
//output statement 
printf("error:cannot divide by zero\n");
return 0;
}
}
int main()
{
//char(variable) declaration
char operator;
double num1,num2,result;
//output statement 
printf("enter an operator(+,-*,/,%%)");
//input statement 
scanf("%c",&operator);
//output statement 
printf("\n enter the number 1:");
//input statement 
scanf("%lf",&num1);
//output statement 
printf("\n enter the number 2:");
//input statement 
scanf("%lf",&num2);
//using switch case
switch(operator){
case'+':
result=add(num1,num2);
break;
case'-':
result=sub(num1,num2);
break;
case'*':
result=mul(num1,num2);
break;
case'%':
result=mod((int)num1,(int)num2);
break;
case'/':
result=div(num1,num2);
break;
default:
//output statement 
printf("error:invalid input operator\n");
return 1;
}
//output statement 
printf("result:%lf\n",result);
return 0;
}