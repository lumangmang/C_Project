//
// Created by Devin on 2021/1/22.
//

#include <stdio.h>
#include <limits.h>

#define PI 3.14159

int main(void) {
    float area, circum, radius;
    printf("what's the radius of your pizza? \n");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circum = 2.0 * radius * PI;
    printf("circum = %1.2f, area = %1.2f\n", circum, area);
    printf("maxvalue = %d\n", INT_MAX);
    return 0;
}

/**
 * 1、编译程序时程序中所有`PI`都会被替换成 3.14159，这一过程被称为`编译时替换`，在运行时所有的替换均已完成。这样的常量称为`明示常量`。
 */