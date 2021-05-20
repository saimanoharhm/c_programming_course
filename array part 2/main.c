#include <stdio.h>
#include <stdlib.h>

int main()
{
    //2D Array declaration
    //datatype array_name[size1][size2];
    int A[10][10];
    int i,j,m,n;
    printf("Enter number of rows: ");
    scanf("%d",&m);
    printf("Enter number of columns: ");
    scanf("%d",&n);
    //Input for matrix
    for(i = 0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter number in [%d][%d]: ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    //Display the matrix
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    return 0;
}
