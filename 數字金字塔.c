#include<stdio.h>

int main(){
    int i, j, k, n=51;

    for(i=0; i<=4; i++){
        for(k=3-i; k>=0; k--){
            printf("   ");
        }

        for(j=n-(10*i)+i; j<=n+(10*i)+i; j+=10){
            printf("%d ", j);
        }
        printf("\n");
    }
}
