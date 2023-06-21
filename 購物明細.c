#include<stdio.h>

int main(){
    int goods[4] = {0}, m[4] = {21, 199, 389, 76}, sum=0, s=0, x=0;
    // goods 是 商品數量 m 是商品的金額 sum 是商品的金額加總 s 是 商品總數量 x 是運費

    // 使用者輸入各商品數量
    for(int i=0; i<4; i++){
        printf("%c:", 65+i); // 顯示商品標記，從 A 開始
        scanf("%d", &goods[i]); // 讀取商品數量
    }

    printf("商品\t數量\t單價\t小計");

    // 計算商品金額加總、商品總數量，並顯示每個商品的詳細資訊
    for(int i=0; i<4; i++){
        if(goods[i] != 0){
            sum += goods[i]*m[i]; // 計算商品金額加總
            s += goods[i]; // 計算商品總數量
            printf("\n%c\t%2d\t%3d\t%4d", 65+i, goods[i], m[i], goods[i]*m[i]); // 顯示商品詳細資訊
        }
    }

    // 根據商品金額加總和商品總數量計算運費
    if(sum <= 299){
        if(s>=1 && s<=10){
            x = 50;
        }
        else if(s>=11 && s<=20){
            x = 80;
        }
        else if(s>=21){
            x = 150;
        }
    }

    // 顯示運費和總金額
    printf("\n運費\t\t\t%4d", x);
    printf("\n總金額\t\t\t%4d", sum+x);
}
