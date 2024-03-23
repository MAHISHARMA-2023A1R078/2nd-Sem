#include<stdio.h>
#include<stdlib.h>
#define size 10
int stack[size],top=-1;//gloabal because top access krna ha ,if one value access in entire program take it global
int isEmpty(){
// if(top==-1)
//return 1;
//else
//return 0;
return (top==-1)? 1:0;
}
int isFull(){
return (top==size-1)? 1:0;//like tyre punture too nahi ha or petrol ha ya nahi
}
void push(){
if(isFull())
printf("stack overflow!!!");
else
{
top++;
int val;
printf("enter value:");
scanf("%d",&val);
stack[top]=val;
printf("element added!!!");
}
}              
void show(){//to display the stack elements
    if(isEmpty())
    printf("stack is empty!!!");
    else{
    int i;
    printf("stack elements are:\n");
    for(i=top;i>=0;i--){
    printf("%d\n",stack[i]);
    }
    }
}
void pop(){
if(isEmpty()){
printf("stack underflow!!!");
}
else{
int val=stack[top];
top--;
printf("element %d remove from the stack",val);
}
}
void peek(){
if(isEmpty()){
printf("stack is empty!!!");
}
else{
//int val=stack[top];
printf("top element in stack is %d ",stack[top]);

}
}
int main(){
 while(1)
    {
        system("cls");
        printf("1.push\n");
        printf("2.pop\n");
        printf("3.peek\n");
        printf("4.show\n");
        printf("5.exit\n");
    
        int choice;
        printf("Enter choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
             push();
                break;
            case 2:
             pop();
                break;
            case 3: 
                peek();
                break;
            case 4:
            show();
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