#include<iostream>
#include<stdio.h>
using namespace std;
void Sawp(int *arr,int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

void Select_Sort(int *arr){
    int n=6;
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min])min=j;
        }
        Sawp(arr,i,min);
    }
}