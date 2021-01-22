//
// Created by Devin on 2021/1/22.
//

#include <stdio.h>

void display(char ch, int lines, int width) {

}

int main(void) {
    int ch;
    int rows, cols;
    printf("enter a character and tow numbers: \n");
    while ((ch = getchar()) != '\n') {
        scanf("%d %d", &rows, &cols);
        display(ch, rows, cols);
    }
    return 0;
}

