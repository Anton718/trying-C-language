#include <stdio.h>

int main() 
{
FILE *ptr;

char buff[100];

char filename[100];

printf("\nEnter file name\n");
scanf("%s", filename);

ptr = fopen(filename, "r");

if (ptr == NULL) 
{
    printf("Cannot open the file.");
}

printf("The file reads as follows:\n - - - -\n");

do {
fgets(buff, 100, ptr);
printf("%s\n", buff);
} while (!feof(ptr));

printf("- - - -\n END OF FILE.\n");

fclose(ptr);

return 0;
}