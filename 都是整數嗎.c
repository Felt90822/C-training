#include<stdio.h>

int main(){
    int n, N[100], x=0, c=0;

    printf("½Ð¿é¤J¦r¦ê:");
    scanf("%d", &n);

    while(n){
        N[c] = n%10;
        n /= 10;
        c++;
    }

    for(int i=0; i<c; i++){
        if((N[i]>=48 && N[i]<=57) || N[i] == '.'){
            x = 1;
        }
        else{
            x = 0;
            break;
        }
    }

    if(x = 1){

    }

}
