#include<stdio.h>
#include<stdlib.h>
#define maxsize 1000
int list[maxsize],size;
void create()
{

    int i;
    printf("Enter List Size:");
    scanf("%d",&size);
    if(size>maxsize)
    {
        printf("List Overflow !!!!!\n");
        size=0;
    }
    else
    {
        printf("Enter elements : \n");
        for(i=0;i<size;i++)
        {
            scanf("%d",&list[i]);   
        }
        printf("List Create Sucessfully !!!!\n");
    }
}
void DisplayList()
{
    int i;
    if(size==0)
    {
        printf("List is Empty !!!!!\n");
    }                                                                                                                                                                                                      
    else
    {
        printf("List Elements are: \n");
        for(i=0;i<size;i++)
        {
            printf("%d\t",list[i]);
        }
        printf("\n");
    }
}
void Insert()
{
    if(size==0)
    {
        printf("List is Empty !!!!!\n");
    }
    else
    {
        int pos,value,i;
        printf("enter position:");
        scanf("%d",&pos);
        printf("enter value to Insert:");
        scanf("%d",&value);
        if(pos>size)
        {
            printf("Invalid Position !!!\n");
        }
        else
        {
            for(i=size;i>=pos;i--)
            {
                list[i]=list[i-1];
            }
                list[pos-1]=value;
                size++;
                printf("Element Inserted Successfully !!!!\n");
        }
    }
}
void Delete()
{
    if(size==0)
    {
        printf("List is Empty !!!!\n");
    }
    else
    {
        int pos,i;
        printf("Enter Position:");
        scanf("%d",&pos);
         for(i=pos-1;i<=size;i++)
            {
                list[i]=list[i+1];
            }
                size--;
                printf("Elemnet Deleted Sucessfully 33333!!!!\n");
        }
}
void Search(){
if(size==0)
printf("list is empty!!!\n");
else{
int val,i;
printf("enter searching value:");
scanf("%d",&val);
for(i=0;i<size;i++){
if(val==list[i]){
break;
}
}
if(i==size)
printf("element not found!!!\n");
else
printf("element found!!!\n");
}
}
int main()
{
    while(1)
    {
        printf("1. Create List\n");
        printf("2.Insert Element In List\n");
        printf("3.Display List\n");
        printf("4.Delete Element From List\n");
        printf("5.Search Element In List\n");
        printf("6.Exit\n");
        int choice;
        printf("\n\nEnter choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                create();
                break;
            case 2:
            Insert();
                break;
            case 3: 
                DisplayList();
                break;
            case 4:
                Delete();
                break;
            case 5:
                Search();
                break;
            case 6:
                exit(0);
                break;
            default:
                printf("Invalid Choice !!!!!");
        }
        printf("\n\n");
        system("pause");
        system("cls");

    }
}