#include <stdio.h>

int main(void)
{
   int myArr1[] = {4, 5, 50, -559, 100, 40, 0, -1500, 66, -90, - 1000} ;
   int i, j;
   int arr_size = sizeof(myArr1)/sizeof(myArr1[0]);
   int temp = 0;
  

   for (i = 0; i < arr_size; i++) {
  for (j = i+1 ; j < arr_size; j++) {
    if (myArr1[i] > myArr1[j]) {
        temp = myArr1[j];
        myArr1[j] = myArr1[i];
        myArr1[i] = temp;
    } 
    }
   }

   for(i = 0; i < arr_size; i++) {
 printf("%d\t", myArr1[i]);
   }
   return 0;
}





