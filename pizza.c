#include<stdio.h>
/*
s001
*/
int main() {
    int m, n, max, min; //�إ��ܼ�

    printf("�п�J pizza �����ƩM�P�ַ|���H�ơG"); //��X���ܦr
    scanf("%d %d", &m, &n);                        //��J�H�ƩM���ļƶq

    min = n * 2;   // �U�H�ֻ̤ݭn������
    max = n * 3;   // �U�H�̦h����ɥΪ�����

    if (m >= min && m <= max) {
        printf("Yes\n");   // �������� pizza �i�ѦP�Ǩɥ�
    } else if (m < min) {
        printf("Not enough\n");   // pizza ������
    } else {
        printf("Too much\n");   // pizza ���q�W�L�Ҧ��H�����w����
    }
}

