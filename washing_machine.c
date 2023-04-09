#include <stdio.h>
#include <stdlib.h>




int main()
{
    int start= 0;
    int i;
    int programm;
    int additional;



    printf("\nStart 1/ Off - 0\n");
    scanf("%d", &start);
    
    if (start == 1)
    {
    printf("\nselect a programm : \n\n1-heavy wash\n2-normal wash \n3-express wash\n\n");
    scanf("%d", &programm);

        switch(programm)
            
        {
        case 1:
            printf("heavy wash started\n");
            break;
        case 2:
            printf("normal wash started\n");
            break;
        case 3:
            printf("express wash started\n");
            break;  
        default :
            printf("ERROR");
            exit(0);
        }

        printf("\n\nWashing is almost over, need additional rinse ? YES -1, NO - 2\n\n");
        scanf("%d", &additional);

        if (additional == 1) {
            printf("Additional rinse is added");
            
        } 
        else 
        {
        printf(". . .");
        printf("\nYour clothes is clean!\n");
        printf("\nMachine is OFF\n");
        exit(0);
        }
        
        printf("\n\nWashing is over. Turn off the machine? YES -1; NO - 2\n\n");
        scanf("%d", &additional);

        if (additional == 1) 
        {
        printf("\n\n. . .\n\n");
        printf("\nYour clothes is clean!\n");
        printf("\nMachine is OFF\n");}
        else
        {
        printf(". . .");
        printf("\nYour clothes is clean!\n");
        printf("\nMachine is still ON\n");
        }
    } 
    else
    {
            printf("\nmachine is off\n");
            exit(0);
        }

    return(0);
}
