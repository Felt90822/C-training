#include<stdio.h>

int main(){
    int n, i, j, t;

    while(scanf("%d", &n)!=EOF){

        int a[n];

        for(i=0; i<n; i++){
            scanf("%d", &a[i]);
        }

        for(i=n-1; i>=0; i--){
            for(j=0; j<i; j++){
                if(a[j+1]<a[j]){
                    t = a[j+1];
                    a[j+1] = a[j];
                    a[j] = t;
                }
            }
        }

        for(i=0; i<n; i++){
            printf("%d ", a[i]);
        }
        printf("\n");
    }
}
