#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[5];
    cout<<"enter the input"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<sum;
}