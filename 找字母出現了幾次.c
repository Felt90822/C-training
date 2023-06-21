#include<stdio.h>

int main(){
    char X[100], W; //建立 X字元陣列, W要找的字
    int c=0;        //計數

    printf("文字串:");  //輸出提示字
    scanf("%[^\n]", X); //輸入字串

    printf("字母:");  //輸出提示字
    scanf(" %c", &W); //輸入要找的字

    for(int i=0; X[i] != '\0'; i++){  //將大寫轉換成小寫
        if(X[i] >= 65 && X[i] <= 90){
            X[i] += 32;
        }
    }

    for(int i=0; X[i] != '\0'; i++){
        if(W == X[i]){   //如果出現要找的字
            c++;         //c 就 +1
        }
    }

    printf("%d times", c); //輸出結果

}
