#include<stdio.h>

int main(){
    int n, m, o; //�]�w�ܼ�n�s�� m�y�츹�X o�Ƽ�

    printf("�п�J�y��s��:"); //��X���ܦr
    scanf("%d", &n);           //��J�s��

    m = n%25;                  //�p���m���X
    if(m == 0){ m=25; }        //�p�G=0 ���X=25��

    if(n<=2500){               //�p��Ĥ@�Ϫ���m
        o = n/25;
        if(o == 0){ o=1; }
        printf("1 %d %d", o, m);
    }

    else if(n>2500 && n<=7500){ //�p��ĤG�Ϫ���m
        m = n%50;
        if(m == 0){ m=50; }
        o = n/25;
        if(o == 0){ o=1; }
        printf("2 %d %d", o, m);
    }

    else if(n>7500 && n<=10000){ //�p��ĤT�Ϫ���m
        o = (n-7500)/25;
        if(o == 0){ o=1; }
        printf("3 %d %d", o, m);
    }

    else{
        printf("No seat");       //�S����m�h��X�o�q��r
    }
}
