# include <stdio.h>
# include "my_mat.h"

int main(){

    int mat[10][10];
    char func = 'S';    // this is where we will store the value to preform functions. 'S' for start to initialize the loop.

    
    //main program is running in a while loop
    while(func != 'D') {
        // accepts A, B, C, D functions from user
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
