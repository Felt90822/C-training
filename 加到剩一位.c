#include<stdio.h>

int main(){
    long long int n; // ��J���Ʀr
    int nums[20], c=0, s=0, sum=0; // �s��Ʀr���}�C, ��ƭp�ƾ�, �`�M, �Ȧs�`�M

    printf("��J�@��Ʀr:"); //��X���ܦr
    scanf("%lld", &n);       //��J�Ʀr

    while(n){
        nums[c] = n % 10; // �N�Ʀr���C�@��s�J�}�C
        n /= 10; // �N�Ʀr���H10�A�H�K�B�z�U�@��Ʀr
        c++; // �p��Ʀr�����
    }

    for(int i=0; i<c; i++){
        s += nums[i]; // �N�Ʀr���C�@��[�`
    }

    while(s > 9){
        sum = 0;

        while(s != 0){
            sum += s % 10; // �N�Ʀr���C�@��A���[�`
            s /= 10; // �N�Ʀr���H10�A�H�K�B�z�U�@��Ʀr
        }

        s = sum; // ��s�`�M��
    }

    printf("%d", s); // ��X�[�`�����G

}


