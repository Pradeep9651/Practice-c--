#include<iostream>
using namespace std;
int main(){
    int arr[5] = {5,12,9,10,11};
    int target = 13;
    int n = 5;
    bool flag = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == target){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        cout<<"Target Found";
    }
    else{
        cout<<"Target not found"<<endl;
    }
    return 0;
}