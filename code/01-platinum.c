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

/**
 * 1、`scanf("%f", &weight)`获取用户输入的数字,用户从键盘输入的都是字符，比如输入数字123，
 *    表示的并不是数字123，而是字符 '1'、字符 '2' 和字符 '3';
 *    `&`是一个取地址符，后面跟着变量名表示`该变量的地址`，&weight就表示变量weight的地址;
 *    `&weight`又称取地址weight，相当于将数据存入以变量weight的地址为地址的变量中
 *    以变量weight的地址为地址的变量就是weight,所以scanf的结果就是把值放到变量weight中
 */