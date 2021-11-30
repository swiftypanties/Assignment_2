# include <stdio.h>
# include "my_mat.h"
#include <string.h>
#define INF 99999

int arr[10][10];

void A(){
    int i, j;
    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            scanf("%d", &arr[i][j]);
        }
    }
}

void B(int start, int end){
    int copy[10][10], i, j, k;
    // create a copy to work inside the function(releasing memory when scope ends)
    for (i = 0; i < 10; i++){       
        // modify 0 to be MAX_INTEGER anywhere but in the trace, to symbolize none existing edge properly.             
        for (j = 0; j < 10; j++){
            if(i==j){
                copy[i][j]=0;  
            }
            else if(arr[i][j]==0 ){
                copy[i][j]=INF; 
            }
            else {
                copy[i][j] = arr[i][j];
            }
        }
    }                                           
    // preforming floydwarshall on the copy
    for(k=0; k<10; k++){                        
        for(i=0; i<10; i++){
            for(j=0; j<10; j++){
                if(copy[i][k] + copy[k][j] < copy[i][j]){
                    copy[i][j] = copy[i][k] + copy[k][j];
                } 
            }
        }
    }
    if(copy[start][end] == INF || copy[start][end] == 0){
        printf("\nFalse");
    }
    else{
        printf("\nTrue");
    }
    
}

void C(int start, int end){
    int copy[10][10], i, j, k;
    // create a copy to work inside the function(releasing memory when scope ends)
    for (i = 0; i < 10; i++){                   
        for (j = 0; j < 10; j++){      
            // modify 0 to be MAX_INTEGER anywhere but in the trace, to symbolize none existing edge properly.          
            if(i==j){
                copy[i][j]=0;  
            }
            else if(arr[i][j]==0 ){
                copy[i][j]=INF; 
            }
            else {
                copy[i][j] = arr[i][j];
            }
        }
    }    
    // preforming floydwarshall on the copy    
    for(k=0; k<10; k++){                             
        for(i=0; i<10; i++){
            for(j=0; j<10; j++){
                 if(copy[i][k] + copy[k][j] < copy[i][j]){
                    copy[i][j] = copy[i][k] + copy[k][j];
                }
            }
        }
    }

    if(copy[start][end] == INF || copy[start][end] == 0){
        printf("\n-1");
    }
    else{
        printf("\n%d", copy[start][end]);
    }
}
 // for(i=0; i<10; i++){
    //     for(j=0; j<10; j++){
    //         printf("%d ", copy[i][j]);
    //     }
    //     printf("\n");
    // }

