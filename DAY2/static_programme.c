#include<stdio.h>
static int i;
 static int i=77;
int main(){
    static int i=88;
    printf("%d\n",i);
    return 0;
}