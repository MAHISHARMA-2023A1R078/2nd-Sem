#include<stdio.h>
int main(){
int x;
printf("enter number:");
scanf("%d",&x);
fflush(stdin);
char ch;//by using buffer char will take its value by freeing the buffer.
printf("enter character:");
scanf("%c",&ch);
float y;
printf("enter float:");
scanf("%f",&y);
printf("x=%d",x);
printf("ch=%c",ch);
printf("y=%f",y);
return 0;
}