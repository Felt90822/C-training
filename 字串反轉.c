#include<stdio.h>

int main(){

    while(1){ //�ϥεL���j��
        int c=0;     //�إ��ܼ� c�p��
        char X[100]; //�إߦr��}�C

        printf("�п�J��r��:"); //��X���ܦr
        scanf("%s", X);          //��J�r��

        if(X[0] != '9' && X[1] != '9'){      //�p�G��J���}�C������ 99
            for(int i=0; X[i] != '\0'; i++){ //�p��}�C����
                c++;
            }

            for(int i=c-1; i>=0; i--){ //��X����᪺�}�C
                printf("%c", X[i]);
            }

            printf("\n"); //����
        }

        else{      //�_�h
            break; //�������
        }
    }
}
