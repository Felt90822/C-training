#include<stdio.h>

int main(){
    int a, b;

    while(scanf("%d %d", &a, &b)!=EOF){
        int m=0;
        for(int i=a; i<=b; i++){
            m += p(i);
        }

        printf("%d\n", m);
    }
}

int p(int n){
    if(n==0 || n==1)
        return 0;

    for(int i=1; i*i<=n; i++){
        if(n%i==0 && i!=1 && i!=n){
            return 0;
        }
    }
    return 1;
}
