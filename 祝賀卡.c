#include<stdio.h>

int main(){
    char w[50], x[50];
    int cw=0, cx=0, i, j;

    printf("input:");
    scanf("%[^\n]", w);
    printf("input:");
    scanf(" %[^\n]", x);

    for(i=0; w[i]!='\0'; i++){
        if(w[i]>=97){
            w[i] -= 32;
        }
        cw++;
    }

    for(i=0; x[i]!='\0'; i++){
        if(x[i]>=97){
            x[i] -= 32;
        }
        cx++;
    }


    for(i=0; i<cw-1; i++){
        for(j=0; j<cx-1; j++){
            if(w[i] == x[j]){
                printf("%c", x[i]);
            }
            if(w[i] == ' '){
                printf(" ");
            }
        }
    }


    printf("\n%s", w);
    printf("\n%s", x);
    printf("\n%d", cw);
    printf("\n%d", cx);
}
