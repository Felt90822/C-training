#include<stdio.h>

int main(){
    int n, c=0, N[100], sum=0; //�]�w�ܼ� n�Ʀr c�p�� N�}�C sum�`�M

    while(1){
        printf("�п�J�Ʀr:"); //��X���ܦr
        scanf("%d", &n);       //��J�Ʀr

        if(n>=0){     //��n�O���Ʈ�
            N[c] = n; //�s�JN�}�C
            c++;      //���U�@��
        }
        else{         //�_�h
            break;    //����
        }
    }

    for(int i=0; i<c; i++){ //�p��Ҧ��Ʀr���`�M
        sum += N[i];
    }

    printf("average => %d", sum/c); //��X������
}
