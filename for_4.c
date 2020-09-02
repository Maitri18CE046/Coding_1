#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
int main()
{
    for(;true;){
        printf("%s","hello");       //OUTPUT: infinite
    }
}


#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
int main()
{
    for(;false;){
        printf("%s","hello");       //OUTPUT: nothing
    }
}


#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
int main()
{
    for(;1||0;){
        printf("%s","hello");       //OUTPUT: infinite
    }
}
