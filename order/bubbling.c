/*
    利用冒泡排序对数组sao进行正序排序。
*/

#include <stdio.h>

int main() {
    int sao[5] = {1, 5, 3, 9, 7};
    int min = 0;
    int last = 5;

    for (int i = 0; i < last; i++) {
        if (sao[i] > sao[i + 1]) {
            min = sao[i];
            sao[i] = sao[i + 1];
            sao[i + 1] = min;
            last -= i;
        }
    }

    for (int j = 0; j < 5; j++) {
        printf("%d ", sao[j]);
    }

    putchar('\n');

}