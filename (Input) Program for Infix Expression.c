#include<stdio.h>
int top1=-1,top2=-1;//top1 - operand stack and top2-opeerator stack
char operator[100];
int operand[100];
void process(){
int x=operand[top1--];
int y=operand[top1--];
char op=operator[top2--];
int z;
switch(op){
case'+':
z=x+y;
break;
case '-':
z=y-x;
break;
case'*':
z=x*y;
break;
case'/':
z=y/x;
break;
}
operand[++top1]=z;
}
int precedence(char op){
switch(op){
case'+':
case'-'://forthrough chahe ye +case ya vo -case return 1 hi
return 1;
case'*':
case'/':
return 2;
default:
return 0;//bracket ke liye zero kyunki operators mein hamne brackets nhidiye too check hi nhi hua
}
}
int evalInfixExpression(char *str){//array built in pointer we can write also (char str[])
int i;
for(i=0;str[i]!='\0';i++){//[string is a sequence of char that is internally null created null] 
char ch=str[i];
if(ch>=48 && ch<=57)//digits ascii //single digit only for double digit concatenation is req.
operand[++top1]=ch-48;//char value into digit
else if(ch=='+'||ch=='-'||ch=='*'||ch=='/'){
if(top2==-1)
operator[++top2]=ch;
else {// common thing - if:push in operator  and else:push so noneed of ifelse
while(top2!=-1 && precedence(ch)<=precedence(operator[top2])){//jab tak stack empty nahi hua ha ya char ki precidenc top char se kam ho 
process();
}
operator[++top2]=ch;
}
}
else if(ch=='('){
operator[++top2]=ch;
}
else if(ch==')'){
while(operator[top2]!='('){
process();
}
top2--;
}
}   
while(top2!=-1){//sare loops khtm hue 
process();
}          
return operand[top1--];
}                      
int main(){
int result=evalInfixExpression("3+(2*5)/(4-2)");
printf("%d",result);
return 0;
}