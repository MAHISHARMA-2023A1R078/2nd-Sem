//write a program to declare the size n and read n elements from the user and store it in an array and print the sum of all the elements in array.
#include<stdio.h>
int main() {
int n, i, sum = 0;
printf("Enter the size of the array: ");
scanf("%d", &n);
int arr[n];
printf("Enter %d elements:\n", n);
for(i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
for(i = 0; i < n; i++) {
sum += arr[i];
}
printf("Sum of all elements in the array: %d\n", sum);
return 0;
}