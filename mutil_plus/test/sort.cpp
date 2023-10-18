#include<iostream>
#include<stdio.h>
#include"sort.h"

using namespace std;
int main(){
    int arr1[6]={1,5,3,9,7,4};
    Insert_Sort(arr1);
    int arr2[6]={1,5,3,8,7,4};
    Select_Sort(arr2);
    for(int i=0;i<6;i++)cout<<arr1[i]<<" ";
    cout<<endl;
    for(int i=0;i<6;i++)cout<<arr2[i]<<" ";
    cout<<endl;
    return 0;
}
