#include<stdio.h>
/*
g006
*/
int main(){
    char X[100]; //�إߤ@�r���}�C

    printf("��J�@��r:"); //��X���ܦr
    scanf("%s", X);        //��J�r��

    for(int i=1; X[i]!='\0'; i+=2){ //�L�X���Ʀ�r��
        printf("%c", X[i]);
    }
}
