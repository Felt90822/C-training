#include<stdio.h>

int main(){
    char W[100], word; //�إߦr���}�CW �r��word
    int i, c=0;        //�]�w�ܼ� c�p�� i�j��

    printf("�п�J��r��:"); //��X���ܦr
    scanf("%[^\n]", W);      //��J�r��
    printf("�r��:");         //��X���ܦr
    scanf(" %c", &word);     //��J�n�M�䪺�r��

    for(i=0; W[i]!='\0'; i++){ //�M��r��
        if(word == W[i]){      //�p�G�O�Ӧr��
            c++;               //�p��+1
        }
    }

    printf("%d times", c);      //��X���G
}
