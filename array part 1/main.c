#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Array
    /*int A[10] = {10,20,30,40,50,60,70,80,90,100};
    printf("%d\n",A[4]);
    */
    int grades[10];
    int a = 10;
    long sum = 0;
    float average = 0.0f;
    printf("\nEnter the 10 grades: \n");
    int i;
    for(i = 0; i<a;i++){
        printf("%d>",i+1);
        scanf("%d",&grades[i]);
        sum = sum + grades[i];
    }
    printf("Sum of ten grades is %ld",sum);
    average = (float)sum/a;
    printf("The average of 10 grades is: %.2f",average);
    return 0;
}
