#include<stdio.h>

int main(){
    int M, N, Mnum, Nnum, Msum=0, Nsum=0;
    //設定變數 M螞蟻的數量 N蚱蜢的數量 Mnum螞蟻的身高 Nnum蚱蜢的身高 Msum螞蟻的身高加總 Nsum蚱蜢的身高加總

    printf("輸入螞蟻和蚱蜢的數量:"); //輸出提示字
    scanf("%d %d", &M, &N);          //輸入數量

    for(int i=0; i<M; i++){          //計算螞蟻的總身高
        scanf("%d", &Mnum);
        Msum += Mnum;
    }

    for(int i=0; i<N; i++){          //計算蚱蜢的總身高
        scanf("%d", &Nnum);
        Nsum += Nnum;
    }

    if(Msum > Nsum){                  //如果螞蟻總身高>蚱蜢總身高
        printf("Yes");                //輸出Yes
    }
    else{
        printf("No");                 //否則，輸出Yes
    }
}
