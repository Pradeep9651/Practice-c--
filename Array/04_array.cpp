#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,3,4,5,7};
    int target=4;
    int n=5;
    bool flag=0;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"Target found"<<endl;
    }
    else{
        cout<<"Target not found"<<endl;
    }
    return 0;
}
