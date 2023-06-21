#include<stdio.h>

int main(){
    int n, c=0, N[100], sum=0; //設定變數 n數字 c計數 N陣列 sum總和

    while(1){
        printf("請輸入數字:"); //輸出提示字
        scanf("%d", &n);       //輸入數字

        if(n>=0){     //當n是正數時
            N[c] = n; //存入N陣列
            c++;      //換下一位
        }
        else{         //否則
            break;    //停止
        }
    }

    for(int i=0; i<c; i++){ //計算所有數字的總和
        sum += N[i];
    }

    printf("average => %d", sum/c); //輸出平均值
}
