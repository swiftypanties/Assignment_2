# include <stdio.h>
# include "my_mat.h"
#define INF 99999

// int test1[10][10] ={
//         {0, 3, 1, 0, 0, 2, 0, 0, 0, 0},
//         {3, 0, 1, 0, 0, 0, 0, 0, 0, 0},
//         {1, 1, 0, 0, 0, 0, 0, 0, 0, 0},
//         {0, 0, 0, 0, 0, 0, 0, 5, 0, 0},
//         {0, 0, 0, 0, 0, 0, 0, 4, 1, 1},
//         {2, 0, 0, 0, 0, 0, 2, 0, 0, 0},
//         {0, 0, 0, 0, 0, 2, 0, 0, 0, 0},
//         {0, 0, 0, 5, 4, 0, 0, 0, 0, 2},
//         {0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
//         {0, 0, 0, 0, 1, 0, 0, 2, 0, 0}
//     };
// int test2[10][10] = {
//         {0, 9, 48, 20, 10, 39, 22, 49, 44, 33},
//         {9, 0, 38, 45, 26, 22, 2, 4, 26, 42},
//         {48, 38, 0, 47, 32, 5, 5, 1, 5, 12},
//         {20, 45, 47, 0, 19, 4, 36, 46, 36, 4},
//         {10, 26, 32, 19, 0, 46, 16, 3, 37, 27},
//         {39, 22, 5, 4, 46, 0, 46, 29, 16, 28},
//         {22, 2, 5, 36, 16, 46, 0, 4, 46, 7},
//         {49, 4, 1, 46, 3, 29, 4, 0, 10, 41},
//         {44, 26, 5, 36, 37, 16, 46, 10, 0, 19},
//         {33, 42, 12, 4, 27, 28, 7, 41, 19, 0},
//     };

int graph[10][10];

int FloydWarshall(int start, int end){
    int copy[10][10], i, j, k;
    // create a copy to work inside the function(releasing memory when scope ends)
    for (i = 0; i < 10; i++){       
        // modify 0 to be 99999 anywhere but in the trace, to symbolize none existing edge properly.             
        for (j = 0; j < 10; j++){
            if(i==j){
                copy[i][j]=0;  
            }
            else if(graph[i][j]==0){ //---<
                copy[i][j]=INF; 
            }
            else {
                copy[i][j] = graph[i][j];//---<
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
    if(copy[start][end] >= INF || copy[start][end] == 0){
        return -1;
    }
    int ans = copy[start][end];
    return ans;
}

void A(){
    int i, j;
    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            scanf("%d", &graph[i][j]);
        }
    }
}

void B(int start, int end){
    int num = FloydWarshall(start, end);
    if(num == -1){
        printf("False\n");
    }
    else{
        printf("True\n");
    }
}

void C(int start, int end){
    int num = FloydWarshall(start, end);
    printf("%d\n", num);
}
//  for(i=0; i<10; i++){
//         for(j=0; j<10; j++){
//             printf("%d ", copy[i][j]);
//         }
//         printf("\n");
//     }

