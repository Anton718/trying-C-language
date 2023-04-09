#include <stdio.h>
#include <string.h>

int main()
{
char str[] = "efgweriuhweiuhwepriuohv";
int i;
int num = strlen(str);
for (i = 0; i < num; i++) {
    if (str[i] != 'i') {
        str[i] = '_';
    }
}
printf("%s", str);
return 0;
}
