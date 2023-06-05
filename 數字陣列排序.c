#include<stdio.h>

int main(){
    int n, X[100], c=0, t; //設定變數:n數字, X陣列, c計數, t交換用

    printf("輸入數字:"); //輸出提示字
    scanf("%d", &n);     //輸入數字

    while(n){      //將數字逐一輸入到陣列
        X[c] = n%10;
        n /= 10;
        c++;
    }

    for(int i=0; i<c-1; i++){  //使用氣泡排序法排列
        for(int j=0; j<c-i-1; j++){
            if(X[j]>X[j+1]){
                t = X[j];
                X[j] = X[j+1];
                X[j+1] = t;
            }
        }
    }

    for(int i=0; i<c; i++){ //輸出結果
        printf("%d", X[i]);
    }
}
