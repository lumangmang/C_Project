//
// Created by Devin on 2021/1/21.
//

#include <stdio.h>

int main(void) {
    float weight;
    float value;
    printf("are you worth your weight \n");
    printf("let's check it out \n");
    printf("please enter your weight: ");
    // 获取用户输入的数字
    scanf("%f", &weight);
    value = 1700.00 * weight * 14.5833;
    printf("your weight is %.2f.\n", value);
    // 读取用户输入数字后按下的回车键
    // getchar()函数返回读取字符的ascii值
    // 这里读取的是\n 所以 v = 10
    int v = getchar();
    printf("%d \n", v);
    // 让程序暂停
    // 再次输入回车时程序退出
    int c = getchar();
    printf("%d", c);
    return 0;
}

