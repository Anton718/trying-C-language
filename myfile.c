#include <stdio.h>

int sum_all(int arr[], int size) 
{
int count = 0;
int i;
for (i=0; i < size; i++) 
{
    count += arr[i];
}
return count;
}



int main()
{
int arr[] = {1, 2, 3, 4, 5, 6, 7};
int arr_size = sizeof(arr)/sizeof(arr[0]);
int i;
int sum;
for (i = 0; i < arr_size; i++)
{
arr[i] *= 2;
}
for(i = 0; i < arr_size; i++)
{
printf("%d\t", arr[i]);
}
sum = sum_all(arr, arr_size);
printf("\nSum of all numbers: %d", sum);
return 0;
}


