//
// Created by Devin on 2021/1/22.
//

#include <stdio.h>
#include <string.h>

#define praise "you are an extra being."

int main(void) {
    char name[40];
    printf("what's your name? \n");
    scanf("%s", name);
    printf("hello %s,%s\n", name, praise);
    printf("%zd----%zd", strlen(name), sizeof name);
    return 0;
}

/**
 * 1、`praise`后面是一个字符串，编译器会在末尾自动添加空字符\0
 * 2、`scanf()`函数只读取用户输入的字符，在遇到第一个空白(空格、制表符\t、换行\n)就不再读取输入。
 *    比如用户输入`hello world`，只会读取`hello`，在读到空格时停止。
 * 3、字符串常量"x"和字符常量'x'不同，区别之一 'x'是基本类型`char`,"x"是派生类型`char数组`；
 *    区别之二 "x"实际由二个字符组成 字符'x'和 字符'\0'，内存中占2个字节。
 * 4、对于`name数组` sizeof 得到40，strlen 计算实际长度不包含\0
 * 5、对于字符串常量`praise`，sizeof 会把\0也计入其中，何时使用 sizeof() 或 sizeof取决于是类型还是特定量，对于类型必须使用sizeof()
 */