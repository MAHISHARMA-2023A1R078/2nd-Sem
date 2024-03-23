#include<stdio.h>
#include<stdlib.h>
int main(){
int *arr=(int*)calloc(5,sizeof(int));
printf("enter array elements:");
int i;
for(i=0;i<5;i++){
scanf("%d",arr+i);
}
arr=realloc(arr,10*sizeof(int));
printf("enter array elements:");
for(i=i;i<10;i++){
scanf("%d",arr+i);
}
printf("array elements are:\n");
for(i=0;i<10;i++){
printf("%d\t",*(arr+i));
}
return 0;
}