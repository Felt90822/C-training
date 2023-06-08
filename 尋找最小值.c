#include<stdio.h>

int main(){
    int N[100], i, n, max, min, c=0, t;
    //砞﹚跑计N皚,i癹伴,n﹃计,min程,c璸计,tユ传ノ

    printf("块﹃计:"); //块矗ボ
    scanf("%d", &n);         //块计

    while(n){       //盢计硋块皚
        N[c] = n%10;
        n /= 10;
        c++;
    }

    min = N[0]; //砞﹚程

    for(i=0; i<c; i++){ //碝т程
        if(N[i]<min){
            t = N[i];
            N[i] = min;
            min = t;
        }
    }

    printf("%d", min); //块挡狦
}
