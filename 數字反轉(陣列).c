#include<stdio.h>

int main(){
    int  N[100], n, c=0, s=0; //�]�w�ܼ� N�}�C n�Ʀr�� c�p�� s�[�`

    printf("�п�J�@��Ʀr:"); //��X���ܦr
    scanf("%d", &n);           //��J�Ʀr

    while(n){       //�N�Ʀr�����J�}�C
        N[c] = n%10;
        n /= 10;
        c++;
    }

    for(int i=0; i<c; i++){ //�p�����᪺�Ʀr
        s *= 10;
        s += N[i];
    }

    printf("%d", s);        //��X���G
}
