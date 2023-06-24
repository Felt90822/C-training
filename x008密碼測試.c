#include<stdio.h>
#include<string.h>

int main(){
    int n, i, j; //建立變數 n輸入密碼的次數 i,j迴圈 
    char w[12] = {0}; //建立 陣列w存放密碼 

    printf("input:"); //輸出提示字 
    scanf("%d", &n);  //輸入次數 

    char W[n][12];   //建立二維陣列存放密碼 
    float scores[n]; //建立分數陣列 
    int words[n];	//存放密碼字數 

    for(i=0; i<n; i++){  
        printf("input your password:"); //輸出提示字 
        scanf("%s", w);		 //輸入密碼
        strncpy(W[i], w, 9); //使用函式複製文字到二維陣列 
    }

    for(i=0; i<n; i++){ //計算字數 
        scores[i] = 0;
        words[i] = 0;
        for(j=0; W[i][j] != '\0'; j++){
            words[i] += 1;
        }
    }
    
	/*
    for(i=0; i<n; i++){
        printf("%d\n", words[i]);
    }
    */
    
    for(i=0; i<n; i++){ //加分 
    
        if(words[i] >= 8 && words[i] <= 10){       //判斷密碼字數是否 >=8, <=10 
            scores[i] += words[i];
        }
        else if(words[i] >= 11 && words[i] <= 12){ //判斷密碼字數是否 >=11, <=12
            scores[i] += words[i]*1.1;
        }
        else if(words[i] < 4){					   //判斷密碼字數是否 < 4
            scores[i] -= words[i];
        }
        
        for(j=0; j<words[i] ; j++){
            if(W[i][j] >= 48 && W[i][j] <= 57){ //判斷相同數字
                if(W[i][j] == W[i][j+1]) { break; }
            }
            else if((W[i][j] >= 65 && W[i][j] <= 90) || (W[i][j] >= 97 && W[i][j] <= 122)){ //判斷連續相同字母 
            	if(W[i][j] == W[i][j+1]) { break; }
            	else if((W[i][j]+1) == W[i][j+1]) { break; }
			}
            else{	//否則 +2 分 
                scores[i] += 2;
                break;
            }
        }
    }
	
    for(i=0; i<n; i++){ //扣分 
        for(j=0; j<words[i]; j++){

            if(W[i][j] >= 48 && W[i][j] <= 57){ //判斷是否為相同數字 
                if(W[i][j] == W[i][j+1]){
                    scores[i] -= 0.9;
                }
            }

            else if((W[i][j] >= 65 && W[i][j] <= 90) || (W[i][j] >= 97 && W[i][j] <= 122)){ 
			//判斷相同和連續字母扣分 
                if(W[i][j] == W[i][j+1]){ //是否為相同字母 
                    scores[i] -= 1;
                }

                if((W[i][j]+1) == W[i][j+1]){ //是否為連續字母 
                    scores[i] -= 0.5;
                }
            }

            else if(W[i][j] == W[i][j+1]){ //判斷是否為相同符號 
            	scores[i] -= 0.8;

            }
        }
    }
	
	/*
	for(i=0; i<n ;i++){
		printf("scores=>%.2f\n", scores[i]);
	}
	*/
	
    for(i=0; i<n; i++){        //輸出結果 
    	if(scores[i] < 0){		//如果分數 < 0 
    		printf("False\n");	//輸出False 
		}
		else{
			printf("True\n"); //否則 輸出True 
		}
	}
	
	return 0;
	
}
