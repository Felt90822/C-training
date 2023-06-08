#include<stdio.h>
/*
g006
*/
int main(){
    char X[100]; //建立一字元陣列

    printf("輸入一串字:"); //輸出提示字
    scanf("%s", X);        //輸入字串

    for(int i=1; X[i]!='\0'; i+=2){ //印出偶數位字元
        printf("%c", X[i]);
    }
}
