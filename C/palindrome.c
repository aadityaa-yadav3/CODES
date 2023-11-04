#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int reverse(int num){
    int new_num = 0;
    while (num){
        new_num = (new_num * 10) + (num % 10);
        num /= 10;
    }
    return new_num;
}

int main()
{
    int num;
    scanf("%d", &num);
    if(num == reverse(num)){
        printf("palindrome");
    }
    else {
        printf("not palindrome");
    }
    return 0;
}