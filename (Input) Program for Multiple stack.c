#include<stdio.h>
#include<stdlib.h>
#define size 10
int stack1[size],top1=-1;
int stack2[size],top2=-1;
void push1(){
if(top1==size-1)
printf("stack-1 overflow!!!");
else
{
top1++;
int val;
printf("enter value:");
scanf("%d",&val);
stack1[top1]=val;//top1 is used to maintain top 1 data to stack 1
printf("element added!!!");
}
}   
 void push2(){
if(top2==size-1)
printf("stack-2 overflow!!!");
else
{
top2++;
int val;
printf("enter value:");
scanf("%d",&val);
stack2[top2]=val;//top1 is used to maintain top 2 data to stack 2
printf("element added!!!");
}
}                        
void show1(){//to display the stack elements
    if(top1==-1)
    printf("stack-1 is empty!!!");
    else{
    int i;
    printf("stack-1 elements are:\n");
    for(i=top1;i>=0;i--){
    printf("%d\n",stack1[i]);
    }
    }
}
void show2(){//to display the stack elements
    if(top2==-1)
    printf("stack-2 is empty!!!");
    else{
    int i;
    printf("stack-2 elements are:\n");
    for(i=top2;i>=0;i--){
    printf("%d\n",stack2[i]);
    }
    }
}
void pop1(){
if(top1==-1){
printf("stack-1 underflow!!!");
}
else{
int val=stack1[top1];
top1--;
printf("element %d remove from the stack-1",val);
}
}
void pop2(){
if(top2==-1){
printf("stack-2 underflow!!!");
}
else{
int val=stack2[top2];
top2--;
printf("element %d remove from the stack-2",val);
}
}
void peek1(){
if(top1==-1){
printf("stack-1 is empty!!!");
}
else{
//int val=stack[top];
printf("top element in stack-1 is %d ",stack1[top1]);

}
}
void peek2(){
if(top2==-1){
printf("stack-2 is empty!!!");
}
else{
//int val=stack[top];
printf("top element in stack-2 is %d ",stack2[top2]);

}
}
int main(){
 while(1)
    {
        system("cls");
        printf("1.push data in stack1\n");
        printf("2.push data in stack2\n");
        printf("3.pop data from stack1\n");
        printf("4.pop data from stack2\n");
        printf("5.peek data from stack1\n");
        printf("6.peek data from stack2\n");
        printf("7.show data of stack1\n");
        printf("8.show data of stack2\n");
        printf("9.Exit\n");
        int choice;
        printf("Enter choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
             push1();
                break;
                case 2:
                push2();
                break;
            case 3:
             pop1();
                break;
                case 4:
                pop2();
                break;
            case 5: 
                peek1();
                break;
                case 6:
                peek2();
                break;
            case 7:
            show1();
                break;
                case 8:
                show2();
                break;
            case 9:
                exit(0);
                break;
            default:
                printf("Invalid Choice !!!!!");
                break;
        }
        printf("\n\n");
        system("pause");
        
}
return 0;
}