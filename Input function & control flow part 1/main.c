#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Input functions
    /*
    int a;
    printf("Enter the value a: ");
    scanf("%d",&a);
    printf("Hello world! %d\n",a);
    */
    //If statements
    /*int a,b;
    printf("Enter the values a & b: ");
    scanf("%d %d",&a,&b);
    if (a>b)
    {
        printf("a is greater than b\n");
    }
    printf("a is not in if\n");
    */
    //If else statement
    /*int a,b;
    printf("Enter the values a & b: ");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("a is greater than b\n");
    }
    else{
        printf("a is less than b\n");
    }
    */
    // Else if
    /*int a;
    printf("Enter the value a: ");
    scanf("%d",&a);
    if(a==10)
    {
        printf("a is 10");
    }
    else if(a==15)
    {
        printf("a is 15");
    }
    else if(a == 20){
        printf("a is 20");
    }
    else{
        printf("a is not present.");
    }
    */
    // Nested If statement
    /*int a,b;
    printf("Enter the values of a & b:");
    scanf("%d %d",&a,&b);
    if(a!=b)
    {
        printf("a is not equal to b \n");
        if(a<b)
        {
            printf("a is less than b\n");
        }
        else{
            printf("a is greater than b\n");
        }
    }
    else
    {
        printf("a is equal to b");
    }*/
    int a,b;
    printf("Enter the values a & b: ");
    scanf("%d %d",&a,&b);
    (a>b)?printf("a is greater than b\n"):printf("a is less than b\n");
    return 0;
}
