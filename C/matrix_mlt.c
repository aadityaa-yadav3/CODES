#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int **mlt(int **arr1, int r1, int c1, int **arr2, int r2, int c2){
    int **new_arr = (int **) malloc(r1 * sizeof(int *));
    for (int i = 0; i < r1; i++){
        int *tmp_arr = (int *) malloc(c2 * sizeof(int));
        new_arr[i] = tmp_arr;
    }
    for (int i = 0; i < r1; i++){
        for (int j = 0; j < c2; j++){
            int sum = 0;
            for (int k = 0; k < r2; k++){
                sum += (arr1[i][k] * arr2[k][j]);
            }
            new_arr[i][j] = sum;
        }
    }
    return new_arr;
}

int main()
{
    int r1, c1, r2, c2;
    scanf("%d %d", &r1, &c1);
    int **arr1 = (int **) malloc (r1 * sizeof(int));
    for (int i = 0; i < r1; i++){
        int *tmp_arr = (int *) malloc(c1 * sizeof(int));
        for (int j = 0; j < c1; j++){
            scanf("%d", &tmp_arr[j]);
        }
        arr1[i] = tmp_arr;
    }
    scanf("%d %d", &r2, &c2);
    int **arr2 = (int **) malloc (r2 * sizeof(int));
    for (int i = 0; i < r2; i++){
        int *tmp_arr = (int *) malloc(c2 * sizeof(int));
        for (int j = 0; j < c2; j++){
            scanf("%d", &tmp_arr[j]);
        }
        arr2[i] = tmp_arr;
    }
    int **new_arr = (int **) malloc(r1 * sizeof(int *));
    for (int i = 0; i < r1; i++){
        int *tmp_arr = (int *) malloc(c2 * sizeof(int));
        new_arr[i] = tmp_arr;
    }
    new_arr = mlt(arr1, r1, c1, arr2, r2, c2);
    for (int i = 0 ; i < r1; i++){
        for (int j = 0; j < c2; j++){
            printf("%d ", new_arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}