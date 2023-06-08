#include<stdio.h>

int main(){
    char W[100]; //設定字元陣列

    printf("輸入一字串:"); //輸出提示字
    scanf("%s", W);        //輸入自串

    for(int i=0; W[i]!='\0'; i++){ //大寫轉換成小寫
        if(W[i]>=65 && W[i]<=90){
            W[i] += 32;
        }
    }

    printf("%s", W); //輸出結果
}
