#include<stdio.h>
/*
m022
*/
int main(){
    char W[100], ans[100]; //�]�w����ܼ� W�K�X ans�ഫ�᪺�K�X
    int x = 0;             //�]�w�ܼ�x

    printf("��J�K�X:");   //��X���ܦr
    scanf("%s", W);        //��J�K�X

    for(int i=0; W[i]!='\0'; i++){  //�v���P�_�C�@�Ӧr
        if(W[i] >= 97 && W[i] <= 122) ans[i] = 'L'; //�p�G���p�g�Aans[i]��L
        if(W[i] >= 65 && W[i] <= 90) ans[i] = 'B';  //�p�G���j�g�Aans[i]��B
        if(W[i] >= 48 && W[i] <= 57) ans[i] = 'N';  //�p�G���Ʀr�Aans[i]��N
    }

    for(int i=0; ans[i]!='\0'; i++){ //�v���P�_�C�@�ӱK�X
        if(ans[i] == 'N'){      //�p�G���K�X���Ʀr,x=1,�ð���B��
            x = 1;
            break;
        }
        if(ans[i] == ans[i+1]){ //�p�G���K�X�D�j�p���,x=1,�ð���B��
            x = 1;
            break;
        }
    }

    if(x!=0){       //�P�_���K�X�O�_���T
        printf("N");
    }
    else{
        printf("Y");
    }
}
