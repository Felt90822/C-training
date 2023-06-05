#include<stdio.h>

int main(){
    int n, i, c=0;
    char W[100], key;

    printf("¿é¤J:");
    scanf("%d", &n);

    int score[n];

    for(i=0; i<4; i++){
        printf("¿é¤J:");
        scanf(" %s", W);

        for(int j=0; W[j]!='\0'; j++){
            if(W[j+1] == W[j]){
                c++;
            }
        }

        score[i] = c;
        c = 0;
    }

    for(i=0; i<n; i++)
        printf("%d\n", score[i]);

}
