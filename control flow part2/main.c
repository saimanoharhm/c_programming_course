#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Ternary Operator
    /*int a,b;
    printf("Enter the values a & b: ");
    scanf("%d %d",&a,&b);
    (a>b) ? printf("a is greater than b\n") : printf("a is less than b\n");
    */
    //switch statement
    int day;
    printf("Enter a day number: ");
    scanf("%d",&day);
    switch(day)
    {
    case 1: printf("Monday");
        break;
    case 2: printf("Tuesday");
        break;
    case 3: printf("Wednesday");
        break;
    default:
    }
    return 0;
}
