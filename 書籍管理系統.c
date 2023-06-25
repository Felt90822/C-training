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
        printf("\n===== 新增書籍 =====\n");
        printf("請輸入書籍主標題名稱:");
        scanf(" %s", newbook.title);

        printf("請輸入書籍次標題名稱:");
        scanf(" %s", newbook.subtitle);

        printf("請輸入ISBN碼:");
        scanf(" %s", newbook.ISBN);

        printf("請輸入出版年/月:");
        scanf("%d/%d", &newbook.publishing[0], &newbook.publishing[1]);

        printf("請輸入購書日期年/月/日:");
        scanf("%d/%d/%d", &newbook.buy[0], &newbook.buy[1], &newbook.buy[2]);

        file = fopen("book.txt", "a");

        //流水號,標題,副標題,ISBN,出版,購書
        fprintf(file, "%d.|%s|%s|%s|%d|%d|%d|%d|%d\n", c, newbook.title, newbook.subtitle,
                newbook.ISBN, newbook.publishing[0], newbook.publishing[1], newbook.buy[0],
                newbook.buy[1], newbook.buy[2]);

        fclose(file);

        printf("\n書籍已成功\新增!\n");

        printf("\n是否要繼續輸入Y/N:");
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

    printf("\n===== 所有書籍 =====\n");

    file = fopen("book.txt", "r");

    while(fscanf(file, "%d.|%[^|]|%[^|]|%[^|]|%d|%d|%d|%d|%d\n", &c, book.title, book.subtitle,
           book.ISBN, &book.publishing[0], &book.publishing[1], &book.buy[0],
           &book.buy[1], &book.buy[2]) != EOF){

           printf("\n書籍代號:%d\n", c);
           printf("書籍主標題:%s\n", book.title);
           printf("書籍副標題:%s\n", book.subtitle);
           printf("ISBN碼:%s\n", book.ISBN);
           printf("書籍出版年/月:%d/%d\n", book.publishing[0], book.publishing[1]);
           printf("書籍購買年/月/日:%d/%d/%d\n", book.buy[0], book.buy[1], book.buy[2]);
    }

    fclose(file);
}

int main(){
    int choice;

    while(1){
        printf("===== 書籍管理系統 =====\n");
        printf("1. 新增書籍\n");
        printf("2. 顯示所有書籍\n");
        printf("3. 退出\n");
        printf("請選擇功\能:\n");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                addbook();
                break;
            case 2:
                displayBook();
                break;
            case 3:
                printf("感謝使用，掰掰~\n");
                break;
            default:
                printf("請輸入有效選項\n");
        }
    }
}
