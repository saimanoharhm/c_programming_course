#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Arithmetic Operators
    /*int a = 2, b = 3, c;
    c = a + b;
    printf("%d\n",c);
    c = a - b ;
    printf("%d\n",c);
    c = a * b;
    printf("%d\n",c);
    c = a / b;
    printf("%d\n",c);
    c = a % b; // % = Modulo means remainder
    printf("%d\n",c);
    */
    //Increment and Decrement operators
    /*int a = 5;
    a++; // a= 6
    printf("%d\n",a); // \n means new line
    a--; // 6-1 = 5
    printf("%d\n",a);
    */
    //Assignment Operators
    /*
    =
    +=
    -=
    *=
    /=
    %=
    */
    /*int a = 5, b;
    b = a; // b = 5
    printf("%d\n",b);
    b %= a; // b = b + a; => b = 5 + 5; => b = 10
    printf("%d\n",b);
    */
    //Relational Operators
    /*
    ==
    >
    <
    !=
    >=
    <=
    */
    // Boolean values 0 and 1
    /*
    If the relation is true it returns 1; if the relation is false,
    it returns value 0.
    */
    /*int a = 5, b = 5, c =10;
    printf("%d\n", a==b); // a==b=> 5 == 5
    printf("%d\n", a > c);
    printf("%d\n", a < b);
    printf("%d\n", a >= c);
    printf("%d\n", a <= b);
    printf("%d\n", a != c); // a!=c => 5!=10
    */
    //Logical Operators
    /*
    && => AND
    || => OR
    ! => NOT
    */
    /*int a = 5, b= 5, c = 10 , ans;
    ans  = (a==b)&&(c>b); // Both should be true
    printf("%d\n",ans);
    ans  = (a!=b)||(c<b); // anyone should be true
    printf("%d\n",ans);
    ans = !(a!=b);
    printf("%d\n",ans);
    */
    //Bitwise Operators
    /*
    & Bitwise AND
    | Bitwise OR
    ^ Bitwise Exclusive OR or XOR
    ~ Bitwise Complement
    << Shift Left
    >> Shift right
    */
    //int a = 12, b = 25;
    //printf("%d\n",a&b);
    /*
    12 = 00001100
    25 = 00011001
  &  8  = 00001000
    */
    //printf("%d\n",a|b);
    /*
    OR
    12 = 00001100
    25 = 00011001
  | 29 = 00011101
    */
    //Sizeof operators
    int a;
    double b;
    float c;
    char d;
    printf("%d\n",sizeof(a));
    printf("%d\n",sizeof(b));
    printf("%d\n",sizeof(c));
    printf("%d\n",sizeof(d));
    return 0;
}
