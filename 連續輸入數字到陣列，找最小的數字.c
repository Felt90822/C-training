#include<stdio.h>
/*
h002
輸入數字到陣列，並找最小值
*/
int main(){
    int n=1, a[100], x, i, y, t; //設定變數 a為陣列

    while(n>0){                 //當n是正數時執行
        printf("請輸入數字:");  //輸出提示字
        scanf("%d", &n);        //輸入數字n
        a[x] = n;               //a第x位=n
        x = x+1;                //換下一位
    }

    for(i=0; i<x-1; i++){ //找最小值
        y = a[0];         //初始值為a的第0位
        if(a[0]>a[i]){    //當有數字比y小
            t = a[i];     //該數字和y交換
            a[i] = a[0];
            a[0] = t;
        }
    }

    printf("min=>%d", a[0]); //輸出最小值
}
