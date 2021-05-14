//#include <stdio.h>
//#include <stdlib.h>

//Constants in c


// using const
/*
int main()
{
    const int a = 10;
    int b = 5;



    b++;
    printf("%d %d\n",a,b);

    return 0;
}
*/
// #define prepocessor
/*
#include<stdio.h>

#ifndef TEXT
    #define TEXT "\nHello, Welcome to the exam hall.\n"
#endif // TEXT
#define test_for(a,b) \
printf(#a" "#b":Thank you for attending!\n")
#define saimanohar(n) printf("sai_score_in_subject_"#n" = %d",sai_score_in_subject_##n)
int main(){
    int sai_score_in_subject_1 = 30;
    printf(TEXT);
    test_for(SEM,exam);
    saimanohar(1);
    return 0;
}

*/
#include<stdio.h>
#define sai 7
#if sai>100
    #undef sai
    #define sai 100
#elif sai<50
    #undef sai
    #define sai 50
#else
    #undef sai
    #define sai 200
#endif
int main()
{
    printf("%d\n",sai);
    return 0;
}
// Special characters in c 

/* 

\ , [ ] { } . etc. 

*/



//Identifiers
/*
int main()
{

    the first char of an identifiers should be alphabet or an underscore


    sai
    _sai
    9sai
    sai,manohar
    int float;
    int sai;

    printf("Hello world!\n");
    return 0;
}
*/
