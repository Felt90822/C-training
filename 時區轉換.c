#include<stdio.h>
/*
t010
*/
int main(){
    int H, M, S ,T, h, m; //�]�w�ܼ�:H�p��,M����,S��,h m�Ȧs

    printf("��J �p�� ���� ��� ���ʮɰϼƶq:"); //��X���ܦr
    scanf("%d %d %d %d", &H, &M, &S, &T);        //��J�ɶ�

    h = (90*T)/60; //�p��g�L�X�p��
    m = (90*T)%60; //�p��g�L�X����

    M += m;      //�p�����
    if(M<0){     //�p�G�����N�V�p�ɭɦ�
        H -= 1;
        M += 60;
    }
    if(M>=60){   //�p�G�j��60�N�V�p�ɶi��
        H += 1;
        M -= 60;
    }

    H += h;
    if(H<0){     //�p�G�����N�ɦ�
        H += 36;
    }
    if(H>=36){   //�p�G�j��36�N�V�p�ɶi��
        H -= 36;
    }

    if(H<10){   //�P�_H�O�_���Ӧ��
        printf("0%d:", H); //�O:��X�ɫe��h�@��0
    }
    else{
        printf("%d:", H);
    }
    if(H<10){   //�P�_M�O�_���Ӧ��
        printf("0%d:", M); //�O:��X�ɫe��h�@��0
    }
    else{
        printf("%d:", M);
    }
    printf("%d", S);
}

