#include<stdio.h>
#include<stdlib.h>
int main(){
int sum=0,i;
for(i=0;i<5;i++){
printf("enter number:");
int *p1=(int*)malloc(sizeof(int));
scanf("%d",p1);
sum+=*p1;
free(p1);
}
printf("sum=%d",sum);
return 0;
}