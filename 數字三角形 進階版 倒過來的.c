#include<stdio.h>
/*
g018
��X�˹L�Ӫ��Ʀr�T����
*/
int main(){
    int i, j; //�]�w�ܼ�

    for(i=1; i<=10; i++){           //����10��
        for(j=11*i; j<=110; j+=10){ //�p��j���Ʀr
            printf("%d ", j);       //��Xj
        }
        printf("\n");               //����
    }
}
