#include<stdio.h>

int main(){
    int n, X[100], c=0, t; //�]�w�ܼ�:n�Ʀr, X�}�C, c�p��, t�洫��

    printf("��J�Ʀr:"); //��X���ܦr
    scanf("%d", &n);     //��J�Ʀr

    while(n){      //�N�Ʀr�v�@��J��}�C
        X[c] = n%10;
        n /= 10;
        c++;
    }

    for(int i=0; i<c-1; i++){  //�ϥή�w�ƧǪk�ƦC
        for(int j=0; j<c-i-1; j++){
            if(X[j]>X[j+1]){
                t = X[j];
                X[j] = X[j+1];
                X[j+1] = t;
            }
        }
    }

    for(int i=0; i<c; i++){ //��X���G
        printf("%d", X[i]);
    }
}
