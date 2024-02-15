//write a program to find even or odd by calling the user defined function through if statements.
#include <stdio.h>
void checkEvenOdd(int num) {
if (num % 2 == 0) {
printf("%d is even.\n", num);
} else {
printf("%d is odd.\n", num);
}
}
int main() {
int number;
printf("Enter an integer: ");
scanf("%d", &number);
checkEvenOdd(number);
return 0;
}