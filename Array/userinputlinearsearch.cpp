#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int target;
    cout << "Enter the target value: ";
    cin >> target;
    bool flag=0;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"target found"<<endl;
    }
    else{
        cout<<"target not found";
    }
}