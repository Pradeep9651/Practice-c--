#include<iostream>
#include<limits.h>
using namespace std;
int FindMinimumInArray(int arr[],int size){
    int minAns = INT_MAX;

    for(int i =0;i<size;i++){
        if(arr[i] < minAns){
            minAns = arr[i];
        }

    }
    return minAns;
}
int main(){
    int arr[5]={10,13,4,43,1};
    int size = 5;
    int Minimum = FindMinimumInArray(arr,size);
    cout<<"Minimum no. is:"<<Minimum<<endl;
}