#include<stdio.h>
/*
s090
*/
int main(){
    float S, Rp, Ra, A, s; //�]�w�ܼ�

    printf("��J:");                        //��X���ܦr
    scanf("%f %f %f %f", &S, &Rp, &Ra, &A); //��J�Ʀr

    s = (S*(Rp*(Ra+A)+S*(Ra-Rp))-2)/222 + 1; //�p��ӹD�p������

    if(s>=1 && s<=3){                       //�p�G1<=s<=3
        printf("%.3f\n�i�D�p�i���D�p", s);  //��X���G
    }
    else if(s>=4 && s<=6){                 //�p�G4<=s<=6
        printf("%.3f\n���ӭn�D�p", s);     //��X���G
    }
    else if(s>=7 && s<=10){                //�p�G7<=s<=10
        printf("%.3f\n�@�w�n�D�p", s);     //��X���G
    }
}
