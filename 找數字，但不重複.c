#include<stdio.h>

int main(){
    int n, idx[100], c=0, i, j, t, min;
    //砞﹚跑计 n计 idx计 c璸计 i,j癹伴 tユ传ノ min程

    while(1){
        printf("叫块计:"); //块矗ボ
        scanf("%d", &n);       //块计

        if(n<0){ break; }      //讽计箂氨ゎ

        idx[c] = n;             //盢计皚
        c++;                    //传
    }

    // 匡拒逼
    for(i=0; i<c-1; i++){
        min = i;
        for(j=i+1; j<c-1; j++){
            if(idx[i] == idx[j]){
                idx[j] == 0; // 璝计盢ㄤ夹癘 0
            }
            if(idx[j] < idx[min]){
                min = j; // тゼ逼场だ程计ま
            }
        }

        // ユ传竚
        t = idx[i];
        idx[i] = idx[min];
        idx[min] = t;
    }

    // 块逼皚
    for(i=0; i<c-2; i++){
        if(idx[i] != 0){
            printf("%d,", idx[i]); // 块獶箂计计ぇ丁硆腹
        }
    }

    printf("%d", idx[i]); // 块程计礚惠硆腹

}
