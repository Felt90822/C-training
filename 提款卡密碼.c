#include<stdio.h>
int main(){
    char p[7];

    scanf("%s", p);

    for(int i=0; i<6; i++){
        int m = p[i+1]-p[i];
        if(m<0){m*=-1;}
        printf("%d", m);
    }
}

//a,b,c,d,e,f,g,h,i,j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z;
//1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26;
