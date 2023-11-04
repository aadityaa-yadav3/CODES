#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

bool check_prime(int num){
    bool pm = true;
    for (int i = 2; i < num; i++){
        if (num % i == 0){
            pm = false;
        }
    }
    return pm;
}

int main()
{
    int num;
    scanf("%d", &num);
    check_prime(num) ? printf("prime") : printf("not prime");
    return 0;
}