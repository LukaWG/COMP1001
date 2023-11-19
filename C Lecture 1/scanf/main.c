#include <stdio.h>

int main() {
    char name[20]; // declare a character array to store the name
    
    printf("Enter your name: ");
    scanf("%19s", name); // read input using scanf function
    
    printf("Hello, %s!\n", name); // print the name
    
    return 0;
}