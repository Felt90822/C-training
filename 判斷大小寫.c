#include<stdio.h>
/*
m022
*/
int main(){
    char W[100], ans[100]; //設定整數變數 W密碼 ans轉換後的密碼
    int x = 0;             //設定變數x

    printf("輸入密碼:");   //輸出提示字
    scanf("%s", W);        //輸入密碼

    for(int i=0; W[i]!='\0'; i++){  //逐次判斷每一個字
        if(W[i] >= 97 && W[i] <= 122) ans[i] = 'L'; //如果為小寫，ans[i]為L
        if(W[i] >= 65 && W[i] <= 90) ans[i] = 'B';  //如果為大寫，ans[i]為B
        if(W[i] >= 48 && W[i] <= 57) ans[i] = 'N';  //如果為數字，ans[i]為N
    }

    for(int i=0; ans[i]!='\0'; i++){ //逐次判斷每一個密碼
        if(ans[i] == 'N'){      //如果有密碼為數字,x=1,並停止運行
            x = 1;
            break;
        }
        if(ans[i] == ans[i+1]){ //如果有密碼非大小交錯,x=1,並停止運行
            x = 1;
            break;
        }
    }

    if(x!=0){       //判斷此密碼是否正確
        printf("N");
    }
    else{
        printf("Y");
    }
}
