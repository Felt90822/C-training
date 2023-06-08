#include<stdio.h>

int main(){
    char X[100];           //建立字元陣列
    int c=0, i, j, mid, x; //建立變數 c計數 i,j迴圈 mid取中間值 x判斷對錯

    printf("輸入一 字串:"); //輸出提示字
    scanf("%s", X);         //輸入一字串

    for(i=0; X[i]!='\0'; i++){ //計算X有多少個字
        c++;
    }

    mid = c/2; //取中間值
    c--;       //c = c-1 避免誤差

    for(i=0; i<mid; i++){   //判斷是否為回文
        if(X[i] == X[c--]){
            x=1; //是:x=1
        }
        else{
            x=0; //否:x=0
            break; //停止迴圈
        }
    }

    if(x == 1){      //如果是回文
        printf("Y"); //輸出Y
    }
    else{            //否則
        printf("N"); //輸出N
    }
}
