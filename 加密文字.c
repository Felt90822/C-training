#include<stdio.h>

int main(){
    char X[100]; // �s�x��J���r��
    int n; // �x�}������

    printf("N:");
    scanf("%d", &n); // �q�ϥΪ̿�JŪ���x�}������

    char Words[n][n]; // �G���r���}�C�A�Ω�s�x�x�}

    printf("��r��:");
    scanf(" %[^\n]", X); // �q�ϥΪ̿�JŪ����r��A�é�������Ÿ�

    int c=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            Words[i][j] = X[c]; // �N��J���r���v�Ӧs�x��x�}��
            c++;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%c", Words[j][i]); // ���C�u�������ǿ�X�x�}����
        }
    }
}
