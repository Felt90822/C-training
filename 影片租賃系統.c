#include<stdio.h>

struct video{
    //������A-E ��������S(A-J) �Ǹ�5�X �D���D �Ƽ��D �ƶq ��� �Ƶ�
    char Sort[3], title[50], subtitle[50], Remark[50];
    int Num, Amount, Day[3];
};

void addVideo(){
    struct video V; //�إߵ��c�ܼ�
    FILE *file; //�ɮ׫���

    V.Num=1, V.Amount=1; //�]�w�y�����M�ƶq
    char check;

    while(1){
        printf("\n===== �إ߼v�� =====\n"); //��X���ܦr ���ϥγo��J�v������T
        printf("�п�J������:");
        scanf(" %c", &V.Sort[0]);

        printf("�п�J��������:");
        scanf(" %c%c", &V.Sort[1], &V.Sort[2]);

        printf("�п�J�D���D:");
        scanf(" %s", V.title);

        printf("�п�J�Ƽ��D:");
        scanf(" %s", V.subtitle);

        printf("�п�J���ɤ��:�~/��/��:");
        scanf("%d/%d/%d", &V.Day[0], &V.Day[1], &V.Day[2]);

        printf("�п�J�Ƶ�(�S���h��J\"�L\"):");
        scanf(" %s", V.Remark);

        file = fopen("video.txt", "a"); // �H���[�Ҧ����}�v���ɮ�


        fprintf(file, "%d.|%c|%c|%c|%05d|%s|%s|%d|%d|%d|%d|%s\n", V.Num, V.Sort[0], V.Sort[1], V.Sort[2], V.Num, V.title,
                V.subtitle, V.Amount, V.Day[0], V.Day[1], V.Day[2], V.Remark); //�}���ɮרÿ�J��T

        fclose(file); //�����ɮ�

        printf("\n�v��\�w\��\�\\��\�� !\n");

        printf("\n�O�_�n�~���JY/N:"); //�߰ݨϥΪ̬O�_�~���J
        scanf(" %c", &check);
        if(check == 'N'){
            break;
        }
        V.Num++;
    }
}

void displayVideo(){
    struct video V;  // �إ߮��y�����c���ܼ�
    FILE *file;  // �ɮ׫���

    printf("\n===== �Ҧ����y =====\n");

    file = fopen("video.txt", "r");  // �HŪ���Ҧ����}���y�ɮ�

    while(fscanf(file, "%d.|%[^|]|%[^|]|%[^|]|%d|%[^|]|%[^|]|%d|%d|%d|%d|%s\n", &V.Num, &V.Sort[0], &V.Sort[1], &V.Sort[2], &V.Num, V.title,
                V.subtitle, &V.Amount, &V.Day[0], &V.Day[1], &V.Day[2], V.Remark) != EOF){ //Ū���v����T

           printf("\n�y����:%d.\n", V.Num);
           printf("�v��������:%c%c%c%05d\n", V.Sort[0], V.Sort[1], V.Sort[2], V.Num);
           printf("�v���D���D:%s\n", V.title);
           printf("�v���Ƽ��D:%s\n", V.subtitle);
           printf("�ƶq:%d\n", V.Amount);
           printf("�v�����ɤ���~/��/��:%d/%d/%d\n", V.Day[0], V.Day[1], V.Day[2]);
           printf("�Ƶ�:[%s]\n", V.Remark);
    }

    fclose(file);  // �����ɮ�
}

int main(){
    int choice; //�إ��ܼ�

    while(1){
        printf("\n===== �v������t�� =====\n");
        printf("1. �إ߼v��\n");
        printf("2. �d�ߩҦ��v��\n");
        printf("3. �h�X\n");
        printf("�п��\�\\��:\n");
        scanf("%d", &choice);

        switch(choice){ //�P�_�ϥΪ̭n�έ����\��
            case 1:
                addVideo();
                break;
            case 2:
                displayVideo();
                break;
            case 3:
                printf("\n�P�¨ϥ� !\n");
                break;
            default:
                printf("\n�п�J���Ŀﶵ\n");
        }
    }
}
