#include<stdio.h>

int main(){
    int  N[100], n, c=0, s=0; //設定變數 N陣列 n數字串 c計數 s加總

    printf("請輸入一串數字:"); //輸出提示字
    scanf("%d", &n);           //輸入數字

    while(n){       //將數字反轉輸入陣列
        N[c] = n%10;
        n /= 10;
        c++;
    }

    for(int i=0; i<c; i++){ //計算反轉後的數字
        s *= 10;
        s += N[i];
    }

    printf("%d", s);        //輸出結果
}
