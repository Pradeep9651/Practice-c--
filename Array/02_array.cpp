#include<iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    int arr[10];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=arr[i]*2;
    }
    for(int i=0;i<n;i++){
    cout<<arr[i];

    }
    
}