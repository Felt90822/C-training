#include<stdio.h>

int main(){
    int n, idx[100], c=0, i, j, t, min;
    //�]�w�ܼ� n�Ʀr idx�s��Ʀr c�p�� i,j�j�� t�洫�� min�̤p��

    while(1){
        printf("�п�J�Ʀr:"); //��X���ܦr
        scanf("%d", &n);       //��J�Ʀr

        if(n<0){ break; }      //��Ʀr�p��s����

        idx[c] = n;             //�N�Ʀr�s�J�}�C
        c++;                    //���U�@��
    }

    // ��ܱƧ�
    for(i=0; i<c-1; i++){
        min = i;
        for(j=i+1; j<c-1; j++){
            if(idx[i] == idx[j]){
                idx[j] == 0; // �Y�ۦP�Ʀr�w�s�b�A�N��аO�� 0
            }
            if(idx[j] < idx[min]){
                min = j; // ��쥼�Ƨǳ������̤p�Ʀr����
            }
        }

        // �洫��m
        t = idx[i];
        idx[i] = idx[min];
        idx[min] = t;
    }

    // ��X�Ƨǫ᪺�}�C
    for(i=0; i<c-2; i++){
        if(idx[i] != 0){
            printf("%d,", idx[i]); // ��X�D�s�Ʀr�A�æb�Ʀr�����[�W�r��
        }
    }

    printf("%d", idx[i]); // ��X�̫�@�ӼƦr�A�L�ݥ[�W�r��

}
