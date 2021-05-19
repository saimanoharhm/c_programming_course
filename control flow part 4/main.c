#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Nested loops
    /*int sum = 0;
    for(int i = 1; i<3;i++){
        for(int j = 1;j<=i;j++){
            sum = sum + j;
            printf("\n %d %d",i,sum);
        }
    }*/
    //goto statement
    /*
    int sum = 0;
    for(int  i = 0; i<=10;i++){
        sum = sum+i;
        if(i==5){
            goto addition;
        }
    }
    addition:
        printf("Sum of five numbers %d\n",sum);
        */

    //Continue statement
    /*
    int sum = 0;
    for(int i = 0; i<=10;i++){
        if(i==5){
            continue;
        }
        else{
            sum = sum+i;
        }
    }
    printf("%d",sum);
    */
    //Break statement
    int a = 10;
    while(a<20){
        printf("%d\n",a);
        a++;
        if(a>15){
            break;
        }
    }
    return 0;
}
/*i = 1 , j = 1, sum = 0+1 => sum = 1
i = 1, j = 2,  false
i = 2, j = 1, sum = 1 + 1 = >sum = 2
i = 2, j = 2, sum = 2 + 2 => sum = 4
*/
