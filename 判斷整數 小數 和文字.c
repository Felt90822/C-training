#include<stdio.h>

int main() {
    char Words[100];         //�إߦr���}�C
    int n = 0, d = 0, w = 0; //�إ��ܼ�

    while (1) {
        printf("�п�J�r��: "); //��X���ܦr
        scanf("%s", Words);     //��J��r

        // �P�_�O�_���������� "999"
        if (Words[0] != '9' && Words[1] != '9' && Words[2] != '9') {
            for (int i = 0; Words[i] != '\0'; i++) {
                if (Words[i] >= 48 && Words[i] <= 57) {// �P�_�O�_���Ʀr
                    n += 1;
                }
                else if (Words[i] == '.') {// �P�_�O�_���p���I
                    d += 1;
                }
                else {
                    w += 1;// �Y���O�Ʀr�]���O�p���I�A�h������r
                }
            }

            if (w > 0) {        // �ھڧP�_���G��X�����T��
                printf("��r\n");
            }
            else if (n > 0 && d == 0) {
                printf("���\n");
            }
            else if (n > 0 && d == 1) {
                printf("�p��\n");
            }
            n = 0;// ���m�p�ƾ�
            d = 0;
            w = 0;
        }
        else {
            break;  // �J�쵲������ "999" ����j��
        }
    }

}

