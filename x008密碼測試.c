#include<stdio.h>
#include<string.h>

int main(){
    int n, i, j; //�إ��ܼ� n��J�K�X������ i,j�j�� 
    char w[12] = {0}; //�إ� �}�Cw�s��K�X 

    printf("input:"); //��X���ܦr 
    scanf("%d", &n);  //��J���� 

    char W[n][12];   //�إߤG���}�C�s��K�X 
    float scores[n]; //�إߤ��ư}�C 
    int words[n];	//�s��K�X�r�� 

    for(i=0; i<n; i++){  
        printf("input your password:"); //��X���ܦr 
        scanf("%s", w);		 //��J�K�X
        strncpy(W[i], w, 9); //�ϥΨ禡�ƻs��r��G���}�C 
    }

    for(i=0; i<n; i++){ //�p��r�� 
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
    
    for(i=0; i<n; i++){ //�[�� 
    
        if(words[i] >= 8 && words[i] <= 10){       //�P�_�K�X�r�ƬO�_ >=8, <=10 
            scores[i] += words[i];
        }
        else if(words[i] >= 11 && words[i] <= 12){ //�P�_�K�X�r�ƬO�_ >=11, <=12
            scores[i] += words[i]*1.1;
        }
        else if(words[i] < 4){					   //�P�_�K�X�r�ƬO�_ < 4
            scores[i] -= words[i];
        }
        
        for(j=0; j<words[i] ; j++){
            if(W[i][j] >= 48 && W[i][j] <= 57){ //�P�_�ۦP�Ʀr
                if(W[i][j] == W[i][j+1]) { break; }
            }
            else if((W[i][j] >= 65 && W[i][j] <= 90) || (W[i][j] >= 97 && W[i][j] <= 122)){ //�P�_�s��ۦP�r�� 
            	if(W[i][j] == W[i][j+1]) { break; }
            	else if((W[i][j]+1) == W[i][j+1]) { break; }
			}
            else{	//�_�h +2 �� 
                scores[i] += 2;
                break;
            }
        }
    }
	
    for(i=0; i<n; i++){ //���� 
        for(j=0; j<words[i]; j++){

            if(W[i][j] >= 48 && W[i][j] <= 57){ //�P�_�O�_���ۦP�Ʀr 
                if(W[i][j] == W[i][j+1]){
                    scores[i] -= 0.9;
                }
            }

            else if((W[i][j] >= 65 && W[i][j] <= 90) || (W[i][j] >= 97 && W[i][j] <= 122)){ 
			//�P�_�ۦP�M�s��r������ 
                if(W[i][j] == W[i][j+1]){ //�O�_���ۦP�r�� 
                    scores[i] -= 1;
                }

                if((W[i][j]+1) == W[i][j+1]){ //�O�_���s��r�� 
                    scores[i] -= 0.5;
                }
            }

            else if(W[i][j] == W[i][j+1]){ //�P�_�O�_���ۦP�Ÿ� 
            	scores[i] -= 0.8;

            }
        }
    }
	
	/*
	for(i=0; i<n ;i++){
		printf("scores=>%.2f\n", scores[i]);
	}
	*/
	
    for(i=0; i<n; i++){        //��X���G 
    	if(scores[i] < 0){		//�p�G���� < 0 
    		printf("False\n");	//��XFalse 
		}
		else{
			printf("True\n"); //�_�h ��XTrue 
		}
	}
	
	return 0;
	
}
