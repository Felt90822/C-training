#include<stdio.h>

int main(){
    int a=1, b; //�]�w�ܼ�

    printf("�п�J����:"); //��X���ܦr
    scanf("%d", &b);       //��J�����

    int T[b];

    for(int i=0; i<b; i++){ //�N�C�Ӷ���k�s
        T[i] = 0;
    }

    while(a!=0){         //��a���O0����
        printf("�벼:"); //��X���ܦr
        scanf("%d", &a); //��J�벼������
        T[a-1] += 1;     //�Ӷ���ƥ[1
    }

    for(int i=0; i<b; i++){
        printf("��%d��:%d��\n", i+1, T[i]); //��X�Ҧ������
    }
}
