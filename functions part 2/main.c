#include <stdio.h>
#include <stdlib.h>
/*void greatNum(){
    int i,j;
    printf("Enter 2 numbers: \n");
    scanf("%d %d",&i,&j);
    if(i>j){
        printf("The greater number is: %d",i);
    }
    else{
        printf("The greater number is: %d",j);
    }


int main()
{
    //Four types of functions
    //1. function with no argument and no return type
    greatNum();
    return 0;
}*/
/*
int greatNum(){
    int i,j;
    printf("Enter 2 numbers: \n");
    scanf("%d %d",&i,&j);
    if(i>j){
        return i;
    }
    else{
        return j;
    }
}

int main()
{
    //Four types of functions
    //2. fun with no argu and a return value
    printf("%d\n",greatNum());
    return 0;
}
*/
/*void greatNum(int x, int y){
    if(x>y){
        printf("%d\n",x);
    }
    else{
        printf("%d\n",y);
    }
}

int main()
{
    //Four types of functions
    //3. fun with arguments and no return type
    int i, j;
    printf("Enter 2 number:\n");
    scanf("%d %d",&i,&j);
    greatNum(i,j);//function call
    return 0;
}*/
int greatNum(int x, int y){
    if(x>y){
        return x;
    }
    else{
        return y;
    }
}

int main()
{
    //Four types of functions
    //4. fun with arguments and a return value
    int i, j;
    printf("Enter 2 number:\n");
    scanf("%d %d",&i,&j);
    printf("%d\n",greatNum(i,j));//function call
    return 0;
}


