#include<stdio.h>
/*
h002
��J�Ʀr��}�C�A�ç�̤p��
*/
int main(){
    int n=1, a[100], x, i, y, t; //�]�w�ܼ� a���}�C

    while(n>0){                 //��n�O���Ʈɰ���
        printf("�п�J�Ʀr:");  //��X���ܦr
        scanf("%d", &n);        //��J�Ʀrn
        a[x] = n;               //a��x��=n
        x = x+1;                //���U�@��
    }

    for(i=0; i<x-1; i++){ //��̤p��
        y = a[0];         //��l�Ȭ�a����0��
        if(a[0]>a[i]){    //���Ʀr��y�p
            t = a[i];     //�ӼƦr�My�洫
            a[i] = a[0];
            a[0] = t;
        }
    }

    printf("min=>%d", a[0]); //��X�̤p��
}
