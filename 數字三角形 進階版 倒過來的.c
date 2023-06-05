#include<stdio.h>
/*
g018
輸出倒過來的數字三角形
*/
int main(){
    int i, j; //設定變數

    for(i=1; i<=10; i++){           //重複10次
        for(j=11*i; j<=110; j+=10){ //計算j的數字
            printf("%d ", j);       //輸出j
        }
        printf("\n");               //換行
    }
}
