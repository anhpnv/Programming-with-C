#include<stdio.h>
// Verify that the expression getchar() != EOF is 0 or 1. 
int main(){
    int c;
    // c=getchar();
    printf("%d\n",getchar()!= EOF);
    printf("\nSome case is 1, some case is 0");
}