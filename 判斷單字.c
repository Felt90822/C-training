#include<stdio.h>

int main(){
    char J[] = {'j', 'u', 'i', 'c', 'e'}, ans[10]; //設定字元變數:J答案,ans輸入的字
    int c=0, score=0;                              //設定變數:c計數,score分數

    printf("果汁 的英文是什麼:"); //輸出提示字
    scanf("%s", ans);             //輸入英文字

    while(1){      //進入無限迴圈
        score = 0; //將分數歸零
        for(int i=0; ans[i]!='\0'; i++){ //逐一檢查使用者輸入的字串
            if(J[i] == ans[i]){ //如果有符合答案的字,分數+1
                score += 1;
            }
        }

        if(score == 5){     //如果全對
            printf("正確"); //輸出結果
            break;          //停止迴圈
        }
        else{                //否則
            printf("錯誤\n"); //輸出錯誤
            printf("果汁 的英文是什麼:"); //從新再問一遍
            scanf("%s", ans);
        }

        c++; //計算問了第幾次

        if(c>=5){break;} //超過6次就不問了
    }
}
