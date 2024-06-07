#include <iostream>
using namespace std;

int main(){
    float c1, f;
    cout << "enter fahrenhit:";
    cin >> f;
    c1 = 5*(f-32)/9;
    cout <<"celsius:"<<c1<< endl;
    
    cout <<"enter celsius:";
    cin>>c1;
    f=(c1*9/5)+32;
    cout<<"fahrenhit:"<<f<<endl;
    return 0;
    
}
