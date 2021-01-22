//
// Created by Devin on 2021/1/22.
//

#include <stdio.h>

int main(void) {
    char ch;
    while ((ch = getchar()) != EOF)
        putchar(ch);
    return 0;
}

/**
 * 1、用户输入的字符被收集并存储在一个称为`缓冲区(buff)`的临时存储区，按下`enter`键后，程序才可以使用用户输入的字符。(缓冲输入)
 */