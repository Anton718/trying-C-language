#include <stdio.h>


int main()
{
char sentence[100];
char word[100];
printf("Type a sentence below:\n");
for (int i = 0; i <= 100; i++)
{
    do
    {
    scanf("%c", &sentence[i]);
    printf("%c", sentence[i]);
    }
    while (sentence[i] != '\n');
    return 0;
}

return 0;
}
