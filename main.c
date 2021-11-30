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

