/*
    利用选择排序对数组sao进行正序排序。
*/

#include <stdio.h>

int main() {
    int sao[5] = {1, 5, 3, 9, 7};
    int min = 0;
    int last = 5;

    for (int i = 1; i < last + 1; i++) {
        for (int j = i; j < last; j++) {
            if (sao[i - 1] > sao[j]) {
                int min = 0;
                min = sao[i - 1];
                sao[i - 1] = sao[j];
                sao[j] = min;
            }
        }
    }

    for (int c = 0; c < 5; c++) {
        printf("%d ", sao[c]);
    }

    putchar('\n');

}