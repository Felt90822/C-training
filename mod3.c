#include<stdio.h>

int main(){
    int n, i, a=0, b=0, c=0, t;

    scanf("%d", &n);

    for(i=1; i<=n; i++){
        scanf("%d", &t);
        if(t%3==0){a += 1;}
        if(t%3==1){b += 1;}
        if(t%3==2){c += 1;}
    }

    printf("%d %d %d", a, b, c);
}
