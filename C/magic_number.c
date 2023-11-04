#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int count_digits(int num){
    int count = 0;
    while (num){
        count++;
        num /= 10;
    }
    return count;
}

int digi_sum(int num){
    int sum = 0;
    while (num){
        sum += (num) % 10;
        num /= 10;
    }
    return sum;
}

int main()
{
    int num;
    scanf("%d", &num);
    int digits = count_digits(num);
    while(count_digits(num) != 1){
        if (digi_sum(num) == 1){
            printf("magic number");
            break;
        }
        else {
            num = digi_sum(num);
        }
    }
    return 0;
}