#include<stdio.h>

int main(){
    char J[] = {'j', 'u', 'i', 'c', 'e'}, ans[10]; //�]�w�r���ܼ�:J����,ans��J���r
    int c=0, score=0;                              //�]�w�ܼ�:c�p��,score����

    printf("�G�� ���^��O����:"); //��X���ܦr
    scanf("%s", ans);             //��J�^��r

    while(1){      //�i�J�L���j��
        score = 0; //�N�����k�s
        for(int i=0; ans[i]!='\0'; i++){ //�v�@�ˬd�ϥΪ̿�J���r��
            if(J[i] == ans[i]){ //�p�G���ŦX���ת��r,����+1
                score += 1;
            }
        }

        if(score == 5){     //�p�G����
            printf("���T"); //��X���G
            break;          //����j��
        }
        else{                //�_�h
            printf("���~\n"); //��X���~
            printf("�G�� ���^��O����:"); //�q�s�A�ݤ@�M
            scanf("%s", ans);
        }

        c++; //�p��ݤF�ĴX��

        if(c>=5){break;} //�W�L6���N���ݤF
    }
}
