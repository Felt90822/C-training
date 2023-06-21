#include<stdio.h>

int main(){

    while(1){ //使用無限迴圈
        int c=0;     //建立變數 c計數
        char X[100]; //建立字串陣列

        printf("請輸入文字串:"); //輸出提示字
        scanf("%s", X);          //輸入字串

        if(X[0] != '9' && X[1] != '9'){      //如果輸入的陣列不等於 99
            for(int i=0; X[i] != '\0'; i++){ //計算陣列長度
                c++;
            }

            for(int i=c-1; i>=0; i--){ //輸出反轉後的陣列
                printf("%c", X[i]);
            }

            printf("\n"); //換行
        }

        else{      //否則
            break; //停止執行
        }
    }
}
