#include<stdio.h>

int main(){
    int goods[4] = {0}, m[4] = {21, 199, 389, 76}, sum=0, s=0, x=0;
    // goods �O �ӫ~�ƶq m �O�ӫ~�����B sum �O�ӫ~�����B�[�` s �O �ӫ~�`�ƶq x �O�B�O

    // �ϥΪ̿�J�U�ӫ~�ƶq
    for(int i=0; i<4; i++){
        printf("%c:", 65+i); // ��ܰӫ~�аO�A�q A �}�l
        scanf("%d", &goods[i]); // Ū���ӫ~�ƶq
    }

    printf("�ӫ~\t�ƶq\t���\t�p�p");

    // �p��ӫ~���B�[�`�B�ӫ~�`�ƶq�A����ܨC�Ӱӫ~���ԲӸ�T
    for(int i=0; i<4; i++){
        if(goods[i] != 0){
            sum += goods[i]*m[i]; // �p��ӫ~���B�[�`
            s += goods[i]; // �p��ӫ~�`�ƶq
            printf("\n%c\t%2d\t%3d\t%4d", 65+i, goods[i], m[i], goods[i]*m[i]); // ��ܰӫ~�ԲӸ�T
        }
    }

    // �ھڰӫ~���B�[�`�M�ӫ~�`�ƶq�p��B�O
    if(sum <= 299){
        if(s>=1 && s<=10){
            x = 50;
        }
        else if(s>=11 && s<=20){
            x = 80;
        }
        else if(s>=21){
            x = 150;
        }
    }

    // ��ܹB�O�M�`���B
    printf("\n�B�O\t\t\t%4d", x);
    printf("\n�`���B\t\t\t%4d", sum+x);
}
