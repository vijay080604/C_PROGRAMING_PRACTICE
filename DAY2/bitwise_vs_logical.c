#include<stdio.h>
int main(){

char x=3;
char y=2;
if(x&y)
    printf("result of x&y is %d\n",x&y);
if(x&&y)
    printf("result of x&&y is %d",x&&y);
    return 0;
}