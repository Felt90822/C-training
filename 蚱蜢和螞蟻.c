#include<stdio.h>

int main(){
    int M, N, Mnum, Nnum, Msum=0, Nsum=0;
    //�]�w�ܼ� M���ƪ��ƶq N�K�g���ƶq Mnum���ƪ����� Nnum�K�g������ Msum���ƪ������[�` Nsum�K�g�������[�`

    printf("��J���ƩM�K�g���ƶq:"); //��X���ܦr
    scanf("%d %d", &M, &N);          //��J�ƶq

    for(int i=0; i<M; i++){          //�p����ƪ��`����
        scanf("%d", &Mnum);
        Msum += Mnum;
    }

    for(int i=0; i<N; i++){          //�p��K�g���`����
        scanf("%d", &Nnum);
        Nsum += Nnum;
    }

    if(Msum > Nsum){                  //�p�G�����`����>�K�g�`����
        printf("Yes");                //��XYes
    }
    else{
        printf("No");                 //�_�h�A��XYes
    }
}
