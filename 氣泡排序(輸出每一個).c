#include<stdio.h>

int main(){
    int n, idx[100], c=0, t;

    while(1){
        printf("�п�J��%d�ӼƦr:", c+1); //��X���ܦr
        scanf("%d", &n);                  //��J�Ʀr

        if(n == 9999){ break; } // �p�G��J�Ʀr�� 9999�A�h���X�j��

        idx[c] = n; // �N��J���Ʀr�s�J�}�C
        c++; // �p���J���Ʀr�Ӽ�
    }

    printf("\n�ƦC=>");

    for(int i=0; i<c; i++){
        printf("\t%d", idx[i]); // ��X�Ƨǫe���ƦC���e
    }

    for(int i=0; i<c; i++){
        for(int j=0; j<c-i; j++){
            if(idx[j] > idx[j+1]){
                t = idx[j];
                idx[j] = idx[j+1];
                idx[j+1] = t;
            }
        }

        printf("\n��%d��=>", i+1);

        for(int j=0; j<c; j++){
            printf("\t%d", idx[j]); // ��X�C�@���Ƨǫ᪺�ƦC���e
        }
    }
}
