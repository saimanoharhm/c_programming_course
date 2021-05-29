#include <stdio.h>
#include <stdlib.h>


//Sum of first n natural numbers
/*
1 + 2 + 3 + 4 + 5
1 + 2 + 3 + ... + n
sum(n) = 1 + 2 + 3 + ... + (n-1) + n
sum(n) = sum(n-1) + n
*/
//Recursion
/*
int sum(int n){
    if(n==0)
        return 0;
    else{
        return sum(n-1) + n;
    }
}

int main()
{
    printf("%d\n",sum(5));
    return 0;
}
*/
/*
sum(n-1) + n

sum(5) => 15
sum(4)+5 = 10 + 5 => 15
sum(3)+4 = 6 + 4 => 10
sum(2)+3 = 3 + 3 => 6
sum(1)+2 = 1 + 2 => 3
sum(0)+1 = 0 + 1 => 1
0
*/

int sum(int n){
    int i,s=0;
    for(i = 0; i<=n;i++){
        s = s+i;
    }
    return s;
}

int main()
{
    printf("%d\n",sum(5));
    return 0;
}

