# include <stdio.h>
# include "my_mat.h"

int main(){

    char func = 'S';    // 'S' for start to initialize the loop.

    while(func != 'D') {
        // accepts A, B, C, D functions from user
        scanf("%c", &func);

        if(func == 'A'){
            A();
        }
        if(func == 'B'){
            int start, end;
            scanf("%d", &start);
            scanf("%d", &end);
            B(start, end);
        }
        if(func == 'C'){
            int start, end;
            scanf("%d", &start);
            scanf("%d", &end);
            C(start, end);
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
