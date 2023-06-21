#include<stdio.h>

int main(){
    long long int n; // 块计
    int nums[20], c=0, s=0, sum=0; // 计皚, 计璸计竟, 羆㎝, 既羆㎝

    printf("块﹃计:"); //块矗ボ
    scanf("%lld", &n);       //块计

    while(n){
        nums[c] = n % 10; // 盢计–皚
        n /= 10; // 盢计埃10獽矪瞶计
        c++; // 璸衡计计
    }

    for(int i=0; i<c; i++){
        s += nums[i]; // 盢计–羆
    }

    while(s > 9){
        sum = 0;

        while(s != 0){
            sum += s % 10; // 盢计–Ω羆
            s /= 10; // 盢计埃10獽矪瞶计
        }

        s = sum; // 穝羆㎝
    }

    printf("%d", s); // 块羆挡狦

}


