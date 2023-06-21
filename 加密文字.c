#include<stdio.h>

int main(){
    char X[100]; // 存儲輸入的字串
    int n; // 矩陣的維度

    printf("N:");
    scanf("%d", &n); // 從使用者輸入讀取矩陣的維度

    char Words[n][n]; // 二維字元陣列，用於存儲矩陣

    printf("文字串:");
    scanf(" %[^\n]", X); // 從使用者輸入讀取文字串，並忽略換行符號

    int c=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            Words[i][j] = X[c]; // 將輸入的字元逐個存儲到矩陣中
            c++;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%c", Words[j][i]); // 按列優先的順序輸出矩陣元素
        }
    }
}
