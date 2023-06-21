#include<stdio.h>

int main(){
    int n, idx[100], c=0, t;

    while(1){
        printf("請輸入第%d個數字:", c+1); //輸出提示字
        scanf("%d", &n);                  //輸入數字

        if(n == 9999){ break; } // 如果輸入數字為 9999，則跳出迴圈

        idx[c] = n; // 將輸入的數字存入陣列
        c++; // 計算輸入的數字個數
    }

    printf("\n數列=>");

    for(int i=0; i<c; i++){
        printf("\t%d", idx[i]); // 輸出排序前的數列內容
    }

    for(int i=0; i<c; i++){
        for(int j=0; j<c-i; j++){
            if(idx[j] > idx[j+1]){
                t = idx[j];
                idx[j] = idx[j+1];
                idx[j+1] = t;
            }
        }

        printf("\n第%d輪=>", i+1);

        for(int j=0; j<c; j++){
            printf("\t%d", idx[j]); // 輸出每一輪排序後的數列內容
        }
    }
}
