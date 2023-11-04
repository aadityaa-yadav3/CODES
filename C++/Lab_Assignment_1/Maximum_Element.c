#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{
    //taking input
    int num;
    scanf("%d", &num);

    //assigning memory to array
    int *arr = (int *)malloc(num * sizeof(int));

    //taking input in array
    for (int i = 0; i < num; i++){
        scanf("%d", &arr[i]);
    }

    //assigning cuurent maximum
    int crr_max = arr[0];

    //traversing through the array and checcking for maximum
    while (num--){
        if (arr[num] > crr_max){
            crr_max = arr[num];
        }
    }

    printf("%d", crr_max);
    return 0;
}