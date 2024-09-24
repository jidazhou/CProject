//
// Created by Oliver on 2024/9/15.
//
#include <stdio.h>

int main (){

    int arr[2] = {1, 2};

    printf("arr=%p\n", arr);
    printf("arr=%d\n", *arr);

    char arr2[5] = "1234";

    printf("arr2=%p\n", arr2);
    printf("ar2r=%s\n", arr2);

    char *c = arr2;

    *(c + 1) = 'p';

    printf("arr2new=%s\n", arr2);

    arr2[2] = 'l';
    printf("arr2newnew=%s\n", arr2);

    char *cptr = "abc";
    cptr[1] = 'k';
    printf("cptr=%s\n", *cptr);

    return 0;
}