#include<stdio.h>
int main(){
    int var=4;
    {
        int var=44;
        //printf("%d\n",var);
    }
    printf("%d",var);
    return 0;
}
/* int fun(){
    printf("%d",a);
} */