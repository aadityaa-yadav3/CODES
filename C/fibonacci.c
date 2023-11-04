#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int fib(int num){
    if (num == 0){
        return 0;
    }
    else if (num == 1){
        return 1;
    }
    else {
        return fib(num - 1) + fib (num - 2);
    }
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d", fib(num));
    return 0;
}