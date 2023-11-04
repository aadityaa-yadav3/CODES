#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{
    long long unsigned limit;
    scanf("%llu", &limit);
    for (long long unsigned i = 0; i < limit; i++){
        for (long long unsigned j = 0; j < limit; j++){
            for (long long unsigned k = 0; k < limit; k++){
                for (long long unsigned l = 0; l < limit; l++){
                    if ((i != j) && (i != k) && (i != l) && (k != j) && (l != j) && (k != l)){
                        long long unsigned x = pow(i, 3) + pow(j, 3);
                        long long unsigned y = pow(k, 3) + pow(l, 3);
                        if (x == y){
                            printf("%llu\n", x);
                        }
                    }
                }
            }
        }
    }
    return 0;
}