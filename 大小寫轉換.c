#include<stdio.h>

int main(){
    char W[100]; //�]�w�r���}�C

    printf("��J�@�r��:"); //��X���ܦr
    scanf("%s", W);        //��J�ۦ�

    for(int i=0; W[i]!='\0'; i++){ //�j�g�ഫ���p�g
        if(W[i]>=65 && W[i]<=90){
            W[i] += 32;
        }
    }

    printf("%s", W); //��X���G
}
