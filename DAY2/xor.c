#include<stdio.h>
int main(){
    int a=4,b=3;
    a=a^b;
      printf("%d ,%d\n",a,b);
    b=a^b;
      printf("%d ,%d\n",a,b);
    a=a^b;
    printf("%d ,%d\n",a,b);
    return 0;
}