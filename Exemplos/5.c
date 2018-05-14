/*diagonal secundaria*/
#include <stdio.h>

int main(){
    int num[3][3] = {2,5,7,5,4,8,1,2,3}, i,j;

    for(i=0; i<=3-1; i++){
        for(j=0; j<=3-1; j++){
            if(i+j == 2)
                printf(" %d", num[i][j]);
        }
        printf("\n");
    }


    return 0;
}
