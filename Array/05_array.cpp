#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}
bool linearSearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return true;
        }
    }
    return false;
}
int main(){
    int arr[5]={2,3,4,5,6};
    int size =5;
    int target;
    cin>>target;
    //printArray(arr,size);
    bool ans=linearSearch(arr,size,target);
    if(ans==1){
        cout<<"Target found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    return 0;
}
