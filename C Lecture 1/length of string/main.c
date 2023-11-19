#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int len;
    int manualLen = 0;

    printf("Enter a sentence: ");
    scanf("%999[^\n]s", str);

    len = strlen(str);

    for (unsigned int n=0; n < 1000; n++)
    {
        if (str[n] == '\0')
        {
            break;
        }
        else
        {
            manualLen++;
        }
    }

    printf("Length of the string is %d\n", len);
    printf("You calculated the length to be %d\n", manualLen);

    return 0;
}
