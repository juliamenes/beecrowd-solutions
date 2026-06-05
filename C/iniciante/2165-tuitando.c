#include <stdio.h>
#include <string.h>

int main()
{
    char str[501];
    fgets(str, 501, stdin); // le a string com o \n

    str[strcspn(str, "\n")] = '\0'; // procura o '\n' e substitui por '\0'

    printf("%s\n", strlen(str) > 140 ? "MUTE" : "TWEET");

    return 0;
}