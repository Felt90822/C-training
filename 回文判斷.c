#include<stdio.h>

int main(){
    char X[100];           //�إߦr���}�C
    int c=0, i, j, mid, x; //�إ��ܼ� c�p�� i,j�j�� mid�������� x�P�_���

    printf("��J�@ �r��:"); //��X���ܦr
    scanf("%s", X);         //��J�@�r��

    for(i=0; X[i]!='\0'; i++){ //�p��X���h�֭Ӧr
        c++;
    }

    mid = c/2; //��������
    c--;       //c = c-1 �קK�~�t

    for(i=0; i<mid; i++){   //�P�_�O�_���^��
        if(X[i] == X[c--]){
            x=1; //�O:x=1
        }
        else{
            x=0; //�_:x=0
            break; //����j��
        }
    }

    if(x == 1){      //�p�G�O�^��
        printf("Y"); //��XY
    }
    else{            //�_�h
        printf("N"); //��XN
    }
}
