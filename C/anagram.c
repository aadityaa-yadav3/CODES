#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void sort(char *arr, int num){
    for (int i = 0; i < num; i++){
        for (int j = i; j < num; j++){
            if (arr[j] < arr[j - 1]){
                char tmp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

int are_anagram(char *arr1, int num1, char *arr2, int num2){
    if (num1 != num2){
        return 0;
    }
    else {
        int anagram = 1;
        for (int i = 0; i < num1; i++){
            if (arr1[i] != arr2[i]){
                anagram = 0;
                return 0;
            }
        }
        if (anagram == 1){
            return 1;
        }
    }
}

int main() {
    int num1;
    scanf("%d", &num1);
    char *arr1 = (char *) malloc (num1 * sizeof(char));
    scanf("%s", arr1);
    sort(arr1, num1);
    int num2;
    scanf("%d", &num2);
    char *arr2 = (char *) malloc (num2 * sizeof(char));
    scanf("%s", arr2);
    sort(arr2, num2);
    // for (int i = 0; i < num1; i++){
    //     printf("%c", arr1[i]);
    // }
    // for (int i = 0; i < num2; i++){
    //     printf("%c", arr2[i]);
    // }
    if (are_anagram(arr1, num1, arr2, num2)){
        printf("Yes");
    }
    else {
        printf("No");
    }
    return 0;
}
