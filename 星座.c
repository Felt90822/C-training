#include<stdio.h>

int main(){
    int m, d, index=0; //�]�w�ܼ� m�� d�� index�}�C�����
    char *A[12] = {"Aquarius", "Pisces", "Aries", //�]�w�r��}�C�P�y
            "Taurus", "Gemini", "Cancer",
            "Leo", "Virgo", "Libra", "Scorpio",
            "Sagittariu", "Capricorn"};

    printf("��J��:"); //��X���ܦr
    scanf("%d", &m);   //��J��
    printf("��J��:"); //��X���ܦr
    scanf("%d", &d);   //��J��


    if((m == 1 && d>=21) || (m == 2 && d<=18)){ //�P�_�ѤJ�����ҹ������P�y
        index = 0;
    }
    else if((m == 2 && d>=19) || (m == 3 && d<=20)){
        index = 1;
    }
    else if((m == 3 && d>=21) || (m == 4 && d<=20)){
        index = 2;
    }
    else if((m == 4 && d>=21) || (m == 5 && d<=21)){
        index = 3;
    }
    else if((m == 5 && d>=22) || (m == 6 && d<=21)){
        index = 4;
    }
    else if((m == 6 && d>=22) || (m == 7 && d<=22)){
        index = 5;
    }
    else if((m == 7 && d>=22) || (m == 8 && d<=23)){
        index = 6;
    }
    else if((m == 8 && d>=24) || (m == 9 && d<=23)){
        index = 7;
    }
    else if((m == 9 && d>=24) || (m == 10 && d<=23)){
        index = 8;
    }
    else if((m == 10 && d>=24) || (m == 11 && d<=22)){
        index = 9;
    }
    else if((m == 11 && d>=23) || (m == 12 && d<=21)){
        index = 10;
    }
    else if((m == 12 && d>=22) || (m == 1 && d<=20)){
        index = 11;
    }

    printf("%s", A[index]); //��X���G
}
