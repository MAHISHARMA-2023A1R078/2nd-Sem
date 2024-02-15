//Write a c program to read a uppercase letter from the user, convert that uppercase letter to lowercase letter by using bitwise operator.
#include <stdio.h>
int main() {
char uppercase_letter, lowercase_letter;
printf("Enter an uppercase letter: ");
scanf(" %c", &uppercase_letter);
// Convert uppercase letter to lowercase using bitwise operation
lowercase_letter = uppercase_letter | 32; 
printf("The lowercase letter is: %c\n", lowercase_letter);
return 0;
}