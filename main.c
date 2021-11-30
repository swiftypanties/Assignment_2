# include <stdio.h>
# include "my_mat.h"

int main(){

    int mat[10][10];
    char func = 'S';    // this is where we will store the value to preform functions. 'S' for start to initialize the loop.
    printf("\nthis is the test matrix\n");
    int i,j;
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    
    //main program is running in a while loop
    while(func != 'D') {
        // accepts A, B, C, D functions from user
        printf("Enter an operation: A, B, C, D.");
        scanf("%c", &func);

        if(func == 'A'){
            A(mat);
        }
        if(func == 'B'){
            int start, end;
            scanf("%d", &start);
            scanf("%d", &end);
            B(mat, start, end);
        }
        if(func == 'C'){
            int start, end;
            scanf("%d", &start);
            scanf("%d", &end);
            C(mat, start, end);
        }
    }
    return 0;
}
// int test[10][10] ={
    //     {0, 3, 1, 0, 0, 2, 0, 0, 0, 0},
    //     {3, 0, 1, 0, 0, 0, 0, 0, 0, 0},
    //     {1, 1, 0, 0, 0, 0, 0, 0, 0, 0},
    //     {0, 0, 0, 0, 0, 0, 0, 5, 0, 0},
    //     {0, 0, 0, 0, 0, 0, 0, 4, 1, 1},
    //     {2, 0, 0, 0, 0, 0, 2, 0, 0, 0},
    //     {0, 0, 0, 0, 0, 2, 0, 0, 0, 0},
    //     {0, 0, 0, 5, 4, 0, 0, 0, 0, 2},
    //     {0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
    //     {0, 0, 0, 0, 1, 0, 0, 2, 0, 0}
    // };
