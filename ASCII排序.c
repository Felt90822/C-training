#include<stdio.h>
/*
j010
排順序
*/
int main(){
    int i, j, x=0;     //建立整數變數
    char a[100]={}, t; //建立字元變數

    scanf("%s", &a);    //輸入文字到a陣列

    for(i=0; a[i]!='\0'; i++){ //計算a陣列的長度
      x = x+1;
    }

    for(i=0; i<x-1; i++){      //使用氣泡排序法將字串排序
      for(j=0; j<x-1-i; j++){
        if(a[j] > a[j+1]){
          t = a[j];
          a[j] = a[j+1];
          a[j+1] = t;
        }
      }
    }

    printf("%s", a); //輸出排序後的字串
}
