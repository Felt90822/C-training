#include<stdio.h>

int main() {
    char Words[100];         //建立字元陣列
    int n = 0, d = 0, w = 0; //建立變數

    while (1) {
        printf("請輸入字串: "); //輸出提示字
        scanf("%s", Words);     //輸入文字

        // 判斷是否為結束條件 "999"
        if (Words[0] != '9' && Words[1] != '9' && Words[2] != '9') {
            for (int i = 0; Words[i] != '\0'; i++) {
                if (Words[i] >= 48 && Words[i] <= 57) {// 判斷是否為數字
                    n += 1;
                }
                else if (Words[i] == '.') {// 判斷是否為小數點
                    d += 1;
                }
                else {
                    w += 1;// 若不是數字也不是小數點，則視為文字
                }
            }

            if (w > 0) {        // 根據判斷結果輸出對應訊息
                printf("文字\n");
            }
            else if (n > 0 && d == 0) {
                printf("整數\n");
            }
            else if (n > 0 && d == 1) {
                printf("小數\n");
            }
            n = 0;// 重置計數器
            d = 0;
            w = 0;
        }
        else {
            break;  // 遇到結束條件 "999" 停止迴圈
        }
    }

}

