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
    //Switch statement
    int day;
    printf("Enter a day number: ");
    scanf("%d",&day);
    switch(day)
    {
    case 1: printf("Monday");
        break;
    case 2: printf("Tuesday");

    case 3: printf("Wed");

    case 4: printf("Thur");

    case 5: printf("Fri");
        break;
    case 6: printf("Satur");
        break;
    case 7: printf("Sun");
        break;
    default: printf("Invalid day number.");
    }
    return 0;
}
/*
int main()
{
    int a,b;
    printf("Enter the values a & b: ");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("a is greater than b\n");
    }
    else{
        printf("a is less than b\n");
    }
    return 0;
}
*/
