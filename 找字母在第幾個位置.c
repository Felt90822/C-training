#include<stdio.h>

int main(){
    char X[100], w; // �D�r��M�ݴM��r��
    int index = 0; // �O���ݴM��r������m

    printf("�п�J�D�r��:");
    scanf("%[^\n]", X); // Ū���D�r�ꪽ�촫��Ÿ�

    printf("�п�J�ݴM��r��:");
    scanf(" %c", &w); // Ū���ݴM��r��

    for(int i=0; X[i] != '\0'; i++){
        if(w == X[i]){ // �p�G�ݴM��r���P�D�r�ꤤ���Y�Ӧr���۵�
            index = i+1; // �O���Ӧr������m�]�q1�}�l�p�ơ^
            break; // ����j��
        }
        else{
            index = -1; // �Y�����h�]�m��m��-1
        }
    }

    printf("��m=>%d", index); // ��X�ݴM��r������m

}
