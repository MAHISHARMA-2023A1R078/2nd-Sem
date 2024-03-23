#include<stdio.h>
#include<string.h>
int main(){
char str[100],stack[100];
int top=-1,i,flag=0;
printf("enter expression:");
gets(str);
int len=strlen(str);
for(i=0;i<len;i++){
if(str[i]=='['|| str[i]=='{'|| str[i]=='('){
stack[++top]=str[i];
}
else if(str[i]==']'||str[i]=='}'||str[i]==')'){
if(stack[top]=='[')
stack[top]=']';
else if(stack[top]=='{')
stack[top]='}';
else stack[top]=')';
if(stack[top]==str[i]){
top--;
}
else{
flag=1;
break;
}
}
}
if(flag==1||top!=-1)
printf("Expression is un-balanced!!!!");
else
printf("Expression is balanced!!!!");
return 0;
}