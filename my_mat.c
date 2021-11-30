# include <stdio.h>
# include "my_mat.h"
#define INF 999999

int A(int arr[10][10]){

    int i, j;

    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            scanf("%d", &arr[i][j]);
            if((arr[i][j] == 0) && (i != j)){   // modify 0 to be MAX_INTEGER anywhere but in the trace, to symbolize none existing edge properly. 
                arr[i][j] = INF;
            }
        }
    }
    return 0;
}

void B(int graph[][10], int start, int end){
    int copy[10][10], i, j, k;

    for (i = 0; i < 10; i++)                    // create a copy to work inside the function(releasing memory when scope ends)
        for (j = 0; j < 10; j++)
            copy[i][j] = graph[i][j];

    for(k=0; k<10; k++){                        // preforming floydwarshall on the copy
        for(i=0; i<10; i++){
            for(j=0; j<10; j++){
                if(copy[i][k] + copy[k][j] < copy[i][j]){
                    copy[i][j] = (copy[i][k] + copy[k][j]);
                }
            }
        }
    }
    if(copy[start][end] == INF){
        printf("\nFalse\n");
    }
    else{
        printf("\nTrue\n");
    }
}

void C(int graph[][10], int start, int end){
    int copy[10][10], i, j, k;

    for (i = 0; i < 10; i++)                         // create a copy to work inside the function(releasing memory when ends)
        for (j = 0; j < 10; j++)
            copy[i][j] = graph[i][j];
            
    for(k=0; k<10; k++){                             // preforming floydwarshall on the copy
        for(i=0; i<10; i++){
            for(j=0; j<10; j++){
                if(copy[i][k] + copy[k][j] < copy[i][j]){
                    copy[i][j] = (copy[i][k] + copy[k][j]);
                }
            }
        }
    }
    if(copy[start][end] == INF){
        printf("-1");
    }
    else{
        printf("%d", copy[start][end]);
    }
}

// printf("\n this is the matrix after floyd C\n");
    // for(i=0; i<10; i++){
    //     for(j=0; j<10; j++){
    //         printf("%d ", copy[i][j]);
    //     }
    //     printf("\n");
    // }

