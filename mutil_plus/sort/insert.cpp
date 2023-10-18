#include<iostream>
#include<stdio.h>
#include"calc.h"
using namespace std;
void Insert_Sort(int *arr){
    
    int number1=add(1,23);
    printf("test number = %d\n",number1);
    int len =6;
    for(int i=1;i<len;i++){
            int key=arr[i];
            int j=i-1;
            while((j>=0) && (key<arr[j])){
                    arr[j+1]=arr[j];
                    j--;
            }
            arr[j+1]=key;
    }
}
/*
1   2   3   5   5   6   7
0   1   2   3   4   5   6
                    j    s
                        i    */
