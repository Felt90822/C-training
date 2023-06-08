#include<stdio.h>

int main(){
    int n, m, o; //設定變數n編號 m座位號碼 o排數

    printf("請輸入座位編號:"); //輸出提示字
    scanf("%d", &n);           //輸入編號

    m = n%25;                  //計算位置號碼
    if(m == 0){ m=25; }        //如果=0 號碼=25位

    if(n<=2500){               //計算第一區的位置
        o = n/25;
        if(o == 0){ o=1; }
        printf("1 %d %d", o, m);
    }

    else if(n>2500 && n<=7500){ //計算第二區的位置
        m = n%50;
        if(m == 0){ m=50; }
        o = n/25;
        if(o == 0){ o=1; }
        printf("2 %d %d", o, m);
    }

    else if(n>7500 && n<=10000){ //計算第三區的位置
        o = (n-7500)/25;
        if(o == 0){ o=1; }
        printf("3 %d %d", o, m);
    }

    else{
        printf("No seat");       //沒有位置則輸出這段文字
    }
}
