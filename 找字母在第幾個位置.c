#include<stdio.h>

int main(){
    char X[100], w; // 主字串和待尋找字元
    int index = 0; // 記錄待尋找字元的位置

    printf("請輸入主字串:");
    scanf("%[^\n]", X); // 讀取主字串直到換行符號

    printf("請輸入待尋找字串:");
    scanf(" %c", &w); // 讀取待尋找字元

    for(int i=0; X[i] != '\0'; i++){
        if(w == X[i]){ // 如果待尋找字元與主字串中的某個字元相等
            index = i+1; // 記錄該字元的位置（從1開始計數）
            break; // 停止迴圈
        }
        else{
            index = -1; // 若未找到則設置位置為-1
        }
    }

    printf("位置=>%d", index); // 輸出待尋找字元的位置

}
