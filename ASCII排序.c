#include<stdio.h>
/*
j010
�ƶ���
*/
int main(){
    int i, j, x=0;     //�إ߾���ܼ�
    char a[100]={}, t; //�إߦr���ܼ�

    scanf("%s", &a);    //��J��r��a�}�C

    for(i=0; a[i]!='\0'; i++){ //�p��a�}�C������
      x = x+1;
    }

    for(i=0; i<x-1; i++){      //�ϥή�w�ƧǪk�N�r��Ƨ�
      for(j=0; j<x-1-i; j++){
        if(a[j] > a[j+1]){
          t = a[j];
          a[j] = a[j+1];
          a[j+1] = t;
        }
      }
    }

    printf("%s", a); //��X�Ƨǫ᪺�r��
}
