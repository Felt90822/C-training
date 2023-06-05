#include<stdio.h>

int main(){
    int a=1, b; //設定變數

    printf("請輸入隊數:"); //輸出提示字
    scanf("%d", &b);       //輸入隊伍數

    int T[b];

    for(int i=0; i<b; i++){ //將每個隊伍都歸零
        T[i] = 0;
    }

    while(a!=0){         //當a不是0執行
        printf("投票:"); //輸出提示字
        scanf("%d", &a); //輸入投票的隊伍
        T[a-1] += 1;     //該隊伍票數加1
    }

    for(int i=0; i<b; i++){
        printf("第%d隊:%d票\n", i+1, T[i]); //輸出所有隊伍票數
    }
}
