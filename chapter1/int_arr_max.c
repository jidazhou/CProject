//
// Created by Oliver on 2024/9/22.
//
#include <stdio.h>
#include <stdlib.h>


int intArrMax(int[], int);
void *error(char []);

int main() {

    int arr[5] = {4, 2, 100, 89, 600};

    int length = sizeof(arr);
    printf("数组最大值为：%d\n", intArrMax(arr, 5));

}

void *error(char arr[]) {
    printf("=====error information:%s\n", arr);
}

int intArrMax(int arr[], int length) {
    if (arr == NULL) {
        atexit(error("数组无效"));
    }

    int max = *arr;
    for (int *p = arr; p < arr + length; p++) {
        if (max < *p) {
            max = *p;
        }
    }
    return max;
}