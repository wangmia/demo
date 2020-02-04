/*
	利用二分查找显示数字所在元素位置
*/

#include <stdio.h>

int main() {
    int sao[7] = {1, 2, 3, 4, 5, 6, 7};
    int chang;
    int zho;
    int cha;
    int i = 1;
    int kai = sao[0];
    int end = sao[6];
    zho = (sizeof(sao) / sizeof(sao[0])) / 2;

    scanf("%d", &cha);

    /*if(cha<sao[kai]||cha>sao[end]){
    		i=0;
    		printf("数字不再查找范围内");
    	}
    	*/

    while (i) {

        if (cha == sao[zho]) {

            printf("%d找到了是sao[%d]个元素", cha, zho);
            i = 0;

        } else {

            if (cha > sao[zho]) {

                kai = sao[zho];

            } else {
                end = sao[zho - 1];

                if (zho == 1) {
                    end = 0;
                }

            }

            zho = (kai + end) / 2;
        }
    }
}