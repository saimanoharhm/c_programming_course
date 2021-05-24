#include <stdio.h>
#include <stdlib.h>

void Sum(int x, int y){ // parameters
    int z = x+y;
    printf("%d",z);
}

int main()
{
    //Functions
    /*
    1. Predefined or Inbuilt functions
    2. User defined functions
    printf
    */
    int a = 10, b = 5;
    int c = 15,d = 15;
    Sum(a,b); //Calling function
    //printf("%d %d\n",e,Sum(c,d));
    return 0;
}
