#include<stdio.h>

int main(){
    int i, j; //設定變數 i j迴圈

    for(i=1; i<=10; i++){          //高的迴圈
        for(j=1; j<=i; j++){       //底的迴圈
            printf("%d ", j*10+i); //輸出數字 j*10+i
        }
        printf("\n");               //換行
    }
}
