#include<stdio.h>
#include<math.h>

int main(){
    int n, a, b, i, j, s=0;

    scanf("%d", &n);

    for(i=1; i<=n; i++){
        scanf("%d%d", &a, &b);
        for(j=ceil(sqrt(a)); j<=sqrt(b); j++){ //ceil�L����i��, sqrt�}�ڸ�
            s += j*j;
        }
        printf("Case %d: %d\n", i, s);
        s=0;
    }
}
