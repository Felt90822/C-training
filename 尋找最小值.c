#include<stdio.h>

int main(){
    int N[100], i, n, max, min, c=0, t;
    //�]�w�ܼ�N�}�C,i�j��,n�@��Ʀr,min�̤p��,c�p��,t�洫��

    printf("��J�@��Ʀr:"); //��X���ܦr
    scanf("%d", &n);         //��J�Ʀr

    while(n){       //�N�Ʀr�v�@��J�}�C
        N[c] = n%10;
        n /= 10;
        c++;
    }

    min = N[0]; //�]�w�̤p��

    for(i=0; i<c; i++){ //�M��̤p��
        if(N[i]<min){
            t = N[i];
            N[i] = min;
            min = t;
        }
    }

    printf("%d", min); //��X���G
}
