#include<stdio.h>

struct video{
    //分類號A-E 次分類號S(A-J) 序號5碼 主標題 副標題 數量 日期 備註
    char Sort[3], title[50], subtitle[50], Remark[50];
    int Num, Amount, Day[3];
};

void addVideo(){
    struct video V; //建立結構變數
    FILE *file; //檔案指標

    V.Num=1, V.Amount=1; //設定流水號和數量
    char check;

    while(1){
        printf("\n===== 建立影片 =====\n"); //輸出提示字 讓使用這輸入影片的資訊
        printf("請輸入分類號:");
        scanf(" %c", &V.Sort[0]);

        printf("請輸入次分類號:");
        scanf(" %c%c", &V.Sort[1], &V.Sort[2]);

        printf("請輸入主標題:");
        scanf(" %s", V.title);

        printf("請輸入副標題:");
        scanf(" %s", V.subtitle);

        printf("請輸入建檔日期:年/月/日:");
        scanf("%d/%d/%d", &V.Day[0], &V.Day[1], &V.Day[2]);

        printf("請輸入備註(沒有則輸入\"無\"):");
        scanf(" %s", V.Remark);

        file = fopen("video.txt", "a"); // 以附加模式打開影片檔案


        fprintf(file, "%d.|%c|%c|%c|%05d|%s|%s|%d|%d|%d|%d|%s\n", V.Num, V.Sort[0], V.Sort[1], V.Sort[2], V.Num, V.title,
                V.subtitle, V.Amount, V.Day[0], V.Day[1], V.Day[2], V.Remark); //開啟檔案並輸入資訊

        fclose(file); //關閉檔案

        printf("\n影片\已\成\功\建\立 !\n");

        printf("\n是否要繼續輸入Y/N:"); //詢問使用者是否繼續輸入
        scanf(" %c", &check);
        if(check == 'N'){
            break;
        }
        V.Num++;
    }
}

void displayVideo(){
    struct video V;  // 建立書籍的結構體變數
    FILE *file;  // 檔案指標

    printf("\n===== 所有書籍 =====\n");

    file = fopen("video.txt", "r");  // 以讀取模式打開書籍檔案

    while(fscanf(file, "%d.|%[^|]|%[^|]|%[^|]|%d|%[^|]|%[^|]|%d|%d|%d|%d|%s\n", &V.Num, &V.Sort[0], &V.Sort[1], &V.Sort[2], &V.Num, V.title,
                V.subtitle, &V.Amount, &V.Day[0], &V.Day[1], &V.Day[2], V.Remark) != EOF){ //讀取影片資訊

           printf("\n流水號:%d.\n", V.Num);
           printf("影片分類號:%c%c%c%05d\n", V.Sort[0], V.Sort[1], V.Sort[2], V.Num);
           printf("影片主標題:%s\n", V.title);
           printf("影片副標題:%s\n", V.subtitle);
           printf("數量:%d\n", V.Amount);
           printf("影片建檔日期年/月/日:%d/%d/%d\n", V.Day[0], V.Day[1], V.Day[2]);
           printf("備註:[%s]\n", V.Remark);
    }

    fclose(file);  // 關閉檔案
}

int main(){
    int choice; //建立變數

    while(1){
        printf("\n===== 影片租賃系統 =====\n");
        printf("1. 建立影片\n");
        printf("2. 查詢所有影片\n");
        printf("3. 退出\n");
        printf("請選擇\功\能:\n");
        scanf("%d", &choice);

        switch(choice){ //判斷使用者要用哪項功能
            case 1:
                addVideo();
                break;
            case 2:
                displayVideo();
                break;
            case 3:
                printf("\n感謝使用 !\n");
                break;
            default:
                printf("\n請輸入有效選項\n");
        }
    }
}
