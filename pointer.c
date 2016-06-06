#include<stdio.h>
int main(){
   const int i=10;
    int *ptr=&i;
    *ptr=(int *)20;
    printf("%d",i);
    return 0;
}
