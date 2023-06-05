#include<stdio.h>
#include<math.h>

int main(){
    int w, h, n, x, y, a, b, i, s=0, j, L;

    printf("¿é¤J:");
    scanf("%d %d", &w, &h);
    int T[h][w];

    for(i=0; i<h; i++){
        for(j=0; j<w; j++){
            T[i][j] = 0;
        }
    }

    scanf("%d", &n);

    for(i=1; i<=n; i++){
        scanf("%d%d%d%d", &x, &y, &a, &b);
        T[y-1][x-1] = 1;
        T[b-1][a-1] = 1;

        if(a-x==0 && b-y>0 || y-b>0){L = fabs((b-y));}
        else if(a-x>0 || x-a>0 && b-y==0){L = fabs((a-x));}
        else{L = fabs((a-x));}

        for(int j=1; j<L; j++){

            if(b-y==0){
                if(a-x>0){
                    a--;
                    T[b-1][a-1] = 1;
                }
                if(a-x<0){
                    T[b-1][a] = 1;
                    a++;
                }
            }

            if(a-x==0){
                if(b-y>0){
                    b--;
                    T[b-1][a-1] = 1;
                }
                if(b-y<0){
                    T[b][a-1] = 1;
                    b++;
                }
            }

            if(b-y>0 && a-x!=0){
                if(a-x>0){
                    b--;
                    a--;
                    T[b-1][a-1] = 1;
                }
                if(a-x<0){
                    b--;
                    a++;
                    T[b-1][a-1] = 1;
                }
            }

            if(b-y<0 && a-x!=0){
                if(a-x>0){
                    b++;
                    a--;
                    T[b-1][a-1] = 1;
                }
                if(a-x<0){
                    y--;
                    x--;
                    T[y-1][x-1] = 1;
                }
            }

        }

    }

    for(i=0; i<h; i++){
        for(j=0; j<w; j++){
            printf("%d | ", T[i][j]);
            if (T[i][j]==1)
                s += 1;
        }
        printf("\n");
    }

    printf("%d", s);
    //printf("\n%d", L);
}
