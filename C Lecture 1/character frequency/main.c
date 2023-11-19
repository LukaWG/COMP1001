#include <stdio.h>

int main() {
    char toFind[2];
    char sentence[1000];
    unsigned int count = 0;

    printf("What sentence would you like to search? ");
    scanf("%990[^\n]s", sentence);

    printf("Which character would you like to count? ");
    scanf("%1s", toFind);

    for (unsigned int n=0; n < 100; n++)
    {
        if (sentence[n] == toFind[0])
        {
            count++;
        }
    }

    printf("The frequency of character %c is %i", toFind[0], count);

}