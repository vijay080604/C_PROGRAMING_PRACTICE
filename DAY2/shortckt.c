#include<stdio.h>
int main(){
int a=25,b=6;
int inc;
inc=(a<b)&&(b++);
printf("%d\n",inc);
printf("%d",b);
}