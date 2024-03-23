#include<stdio.h>
#include<stdlib.h>
#define size 10
int stack[size],top1=-1,top2=size;
void push1(int value){//jo value pass krein vo stack mein jaye
if(top1==top2-1)
printf("stack-1 overflow!!!");
else{
stack[++top1]=value;
}
}
void push2(int value){
if(top2==top1)
printf("stack-2 overflow!!!");
else{
stack[--top2]=value;//reverse order so decrement
}
}
void show1(){
 if(top1==-1)
 printf("stack-1 is empty!!!");
 else{
 int i;
 for(i=top1;i>=0;i--)//
 printf("%d\n",stack[i]);
 }
}
void show2(){
 if(top2==size)
 printf("stack-2 is empty!!!");
 else{
 int i;
 for(i=top2;i<size;i++)
 printf("%d\n",stack[i]);
 }
}
int main(){
 while(1)
    {
        system("cls");
        printf("1.push data in stack1\n");
        printf("2.push data in stack2\n");
        printf("3.show data of stack1\n");
        printf("4.show data of stack2\n");
        printf("5.Exit\n");
        int choice,val;
        printf("Enter choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("enter value:");
            scanf("%d",&val);
             push1(val);
                break;
                case 2:
                printf("enter value:");
            scanf("%d",&val);
                push2(val);
                break;
       
            case 3:
            show1();
                break;
                case 4:
                show2();
                break;
            case 5:
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