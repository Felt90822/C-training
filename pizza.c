#include<stdio.h>
/*
s001
*/
int main() {
    int m, n, max, min; //建立變數

    printf("請輸入 pizza 的片數和同樂會的人數："); //輸出提示字
    scanf("%d %d", &m, &n);                        //輸入人數和披薩數量

    min = n * 2;   // 各人最少需要的片數
    max = n * 3;   // 各人最多能夠享用的片數

    if (m >= min && m <= max) {
        printf("Yes\n");   // 有足夠的 pizza 可供同學享用
    } else if (m < min) {
        printf("Not enough\n");   // pizza 不夠分
    } else {
        printf("Too much\n");   // pizza 份量超過所有人的指定份數
    }
}

