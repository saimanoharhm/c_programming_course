#include <stdio.h>
#include <stdlib.h>

int main()
{
    //3D Array
    int A[2][3][3] = {
        {{1,2,3},{4,5,6},{7,8,9}},
        {{10,11,12},{13,14,15},{16,17,18}}
    };
    int i,j,k;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                printf("Element at [%d][%d][%d]: %d\n",i,j,k,A[i][j][k]);
            }
        }
    }
    return 0;
}

i = 0,j=0,k=0,[0][0][0] = 1 
i =0 , j = 0, k =1, [0][0][1] = 2
i = 0, j = 0, k = 2, [0][0][2] = 3
i = 0, j = 1, k = 0,
i = 0, j = 1, k = 1
i = 0, j= 1, k = 2,
i = 0, j= 2,k = 0
i= 0,j = 2,k =1

 
