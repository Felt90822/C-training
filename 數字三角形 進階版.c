#include<stdio.h>
/*
g017
輸出靠左直角數字三角形
*/
int main(){
    int i, j, x=0; //建立變數i, j 迴圈, c記數字

    for(i=101; i<=110; i++){       //三角形的高
        for(j=x; j>=0; j--){       //三角形的底
            printf("%d ", i-j*10); //輸出該層的數字
        }
        x = x+1;      //計算現在第幾層
        printf("\n"); //換下一層
    }
}
