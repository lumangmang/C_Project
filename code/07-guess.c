//
// Created by Devin on 2021/1/22.
//

#include <stdio.h>

int main(void) {
    int guess = 1;
    char a;
    printf("pick an integer from 1 to 100. i will try to guess it. \n");
    printf("response with a y if right and with n if wrong \n");
    printf("is your number %d? \n", guess);
    while ((a = getchar()) != 'y') {
        printf("a = %c \n", a);
        printf("then,is it %d? \n", ++guess);
        while (getchar() != '\n') {
            continue;
        }
    }
    return 0;
}