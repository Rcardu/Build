#include<stdio.h>
#define NUMBER 3

int main(){
    int a=10;
#ifdef DEBUG
    printf("This is a program for test !\n");
#endif
    for(int i=0;i<NUMBER;i++){
        printf("hello, GCC!!\n");
    }
    return 0;
}