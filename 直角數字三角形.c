#include<stdio.h>

int main(){
    int i, j; //�]�w�ܼ� i j�j��

    for(i=1; i<=10; i++){          //�����j��
        for(j=1; j<=i; j++){       //�����j��
            printf("%d ", j*10+i); //��X�Ʀr j*10+i
        }
        printf("\n");               //����
    }
}
