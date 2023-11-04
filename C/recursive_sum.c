#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int rec_sum(int a, int b, int c, int num){
    if (num == 1){
        return a;
    }
    else if (num == 2){
        return b;
    }
    else if (num == 3){
        return c;
    }
    else {
        return rec_sum(a, b, c, num - 2) + rec_sum(a, b, c, num - 1);
    }
}

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int num;
    scanf("%d", &num);
    printf("%d", rec_sum(a, b, c, num));
    return 0;
}