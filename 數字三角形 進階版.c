#include<stdio.h>
/*
g017
��X�a�������Ʀr�T����
*/
int main(){
    int i, j, x=0; //�إ��ܼ�i, j �j��, c�O�Ʀr

    for(i=101; i<=110; i++){       //�T���Ϊ���
        for(j=x; j>=0; j--){       //�T���Ϊ���
            printf("%d ", i-j*10); //��X�Ӽh���Ʀr
        }
        x = x+1;      //�p��{�b�ĴX�h
        printf("\n"); //���U�@�h
    }
}
