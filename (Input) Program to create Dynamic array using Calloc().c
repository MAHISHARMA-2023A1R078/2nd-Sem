#include<stdio.h>
#include<stdlib.h>
int main(){
int *arr=(int*)calloc(5,sizeof(int));//dynamic array creation
printf("enter array elements:");
int i;
for(i=0;i<5;i++){
scanf("%d",arr+i);
}
printf("array elements are:\n");
for(i=0;i<5;i++){
printf("%d\t",*(arr+i));
}
free(arr);
return 0;
}