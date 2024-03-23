#include<stdio.h>
#include<string.h>
int main(){
int sum=0,i,p1;
for(i=0;i<5;i++){
printf("enter number:");
scanf("%d",&p1);
sum+=p1;
}
printf("sum=%d",sum);
getch();
return 0;
}