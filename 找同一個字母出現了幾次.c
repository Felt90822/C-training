#include<stdio.h>

int main(){
    char W[100], word; //建立字元陣列W 字元word
    int i, c=0;        //設定變數 c計數 i迴圈

    printf("請輸入文字串:"); //輸出提示字
    scanf("%[^\n]", W);      //輸入字串
    printf("字母:");         //輸出提示字
    scanf(" %c", &word);     //輸入要尋找的字元

    for(i=0; W[i]!='\0'; i++){ //尋找字元
        if(word == W[i]){      //如果是該字元
            c++;               //計數+1
        }
    }

    printf("%d times", c);      //輸出結果
}
