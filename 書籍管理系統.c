#include<stdio.h>

struct Book {
        char title[50], subtitle[50], ISBN[13];
        int publishing[2], buy[3];
};

void addbook(){
    struct Book newbook;
    FILE *file;

    int c=1;
    char check;

    while(1){
        printf("\n===== �s�W���y =====\n");
        printf("�п�J���y�D���D�W��:");
        scanf(" %s", newbook.title);

        printf("�п�J���y�����D�W��:");
        scanf(" %s", newbook.subtitle);

        printf("�п�JISBN�X:");
        scanf(" %s", newbook.ISBN);

        printf("�п�J�X���~/��:");
        scanf("%d/%d", &newbook.publishing[0], &newbook.publishing[1]);

        printf("�п�J�ʮѤ���~/��/��:");
        scanf("%d/%d/%d", &newbook.buy[0], &newbook.buy[1], &newbook.buy[2]);

        file = fopen("book.txt", "a");

        //�y����,���D,�Ƽ��D,ISBN,�X��,�ʮ�
        fprintf(file, "%d.|%s|%s|%s|%d|%d|%d|%d|%d\n", c, newbook.title, newbook.subtitle,
                newbook.ISBN, newbook.publishing[0], newbook.publishing[1], newbook.buy[0],
                newbook.buy[1], newbook.buy[2]);

        fclose(file);

        printf("\n���y�w���\\�s�W!\n");

        printf("\n�O�_�n�~���JY/N:");
        scanf(" %c", &check);
        if(check == 'N'){
            c=0;
            break;
        }
        c++;
    }
}

void displayBook(){
    struct Book book;
    FILE *file;

    int c;

    printf("\n===== �Ҧ����y =====\n");

    file = fopen("book.txt", "r");

    while(fscanf(file, "%d.|%[^|]|%[^|]|%[^|]|%d|%d|%d|%d|%d\n", &c, book.title, book.subtitle,
           book.ISBN, &book.publishing[0], &book.publishing[1], &book.buy[0],
           &book.buy[1], &book.buy[2]) != EOF){

           printf("\n���y�N��:%d\n", c);
           printf("���y�D���D:%s\n", book.title);
           printf("���y�Ƽ��D:%s\n", book.subtitle);
           printf("ISBN�X:%s\n", book.ISBN);
           printf("���y�X���~/��:%d/%d\n", book.publishing[0], book.publishing[1]);
           printf("���y�ʶR�~/��/��:%d/%d/%d\n", book.buy[0], book.buy[1], book.buy[2]);
    }

    fclose(file);
}

int main(){
    int choice;

    while(1){
        printf("===== ���y�޲z�t�� =====\n");
        printf("1. �s�W���y\n");
        printf("2. ��ܩҦ����y\n");
        printf("3. �h�X\n");
        printf("�п�ܥ\\��:\n");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                addbook();
                break;
            case 2:
                displayBook();
                break;
            case 3:
                printf("�P�¨ϥΡA�T�T~\n");
                break;
            default:
                printf("�п�J���Ŀﶵ\n");
        }
    }
}
