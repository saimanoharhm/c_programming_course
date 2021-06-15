#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Lengthstr(char str[]){
    int i;
    for(i=0;str[i]!='\0';i++){
    }
    printf("Length is %d\n",i);
}
void changingcase(char str[]){
    int i;
    for(i=0;str[i]!='\0';i++){
        str[i] = str[i] + 32;
    }
    printf("%s\n",str);
}
void changingmixedcase(char str[]){
    int i;
    for(i=0;str[i]!='\0';i++){
        if(str[i]>=65&&str[i]<=90)
            str[i]+=32;
        else if(str[i]>=97&&str[i]<=122)
            str[i]-=32;
    }
    printf("%s\n",str);
}

int main()
{
    char str[] = "SAImanoHar";
    char str2[] = "I am ";
    //Lengthstr(str);
    //changingcase(str);
    //changingmixedcase(str);
    /*printf("%s\n",strcat(str2,str));
    printf("%d\n",strlen(str));
    */
    char str3[] = " ";
    printf("Enter the string: \n");
    gets(str3);
    printf("%s\n",str3);
    return 0;
}
