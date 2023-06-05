#include<stdio.h>
/*
s090
*/
int main(){
    float S, Rp, Ra, A, s; //設定變數

    printf("輸入:");                        //輸出提示字
    scanf("%f %f %f %f", &S, &Rp, &Ra, &A); //輸入數字

    s = (S*(Rp*(Ra+A)+S*(Ra-Rp))-2)/222 + 1; //計算該道歉的分數

    if(s>=1 && s<=3){                       //如果1<=s<=3
        printf("%.3f\n可道歉可不道歉", s);  //輸出結果
    }
    else if(s>=4 && s<=6){                 //如果4<=s<=6
        printf("%.3f\n應該要道歉", s);     //輸出結果
    }
    else if(s>=7 && s<=10){                //如果7<=s<=10
        printf("%.3f\n一定要道歉", s);     //輸出結果
    }
}
