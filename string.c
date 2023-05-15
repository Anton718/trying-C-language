#include <stdio.h>

// changes to test connection 

int main()
{
char sentence[100];
char word[100];
char *w;
int x;
printf("Type a sentence below:\n");
for (int i = 0; i <= 100; i++)
{
    do
    {
    scanf("%c", &sentence[i]);
    printf("%c", sentence[i]);
    word[i] = sentence[i];
    if (word[i] == ' ') 
    {
        *w = word[0];
    }
    }
    while (sentence[i] != '\n');
    printf("%s", w);
    return 0;

}

return 0;
}
