//
// Created by Devin on 2021/1/22.
//

#include <stdio.h>
#include <string.h>

#define density 62.4

int main(void) {
    float weight, volume;
    int size, letters;
    char name[10];
    char a = 's';
    printf("%c", a);
    printf("what's your first name? \n");
    scanf("%s", name);
    printf("%s what's your weight in \n", name);
    scanf("%f", &weight);
    size = sizeof(name);
    letters = strlen(name);
    volume = weight / density;
    printf("well, %s, your volume is %2.2f feet \n", name, volume);
    printf("your first name has %d letters,\n", letters);
    printf("and we have %d bytes \n", size);
}

/**
 * 1、用`数组`存储`字符串`,用户输入的名被存储在数组中,该数组在内存中占用40个连续的字节,每个字节存储一个字符值。
 * 2、使用`%s`来处理字符串的输入输出。Note: name 没有&前缀,weight有,&weight和name都表示地址。
 * 3、使用`strlen()`函数获取字符串的长度
 * 4、C没有专门存储字符串的数据类型，字符串都被存储在char类型的数组中。数组由连续的存储单元组成，
 *    字符串中的字符被存储存储在相邻的存储单元中，每个单元存储一个字符。(会空出一个单元存储结束符\0空字符)
 * 5、`sizeof()`以字节为单位给出对象的大小。
 */