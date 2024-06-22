#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number to check :"<<endl;
    cin>>n;
    int temp = n;
    int ans = 0;

    // function to calculate
    // the sum of individual digits
    while (n > 0) {

        int rem = n % 10;
        ans = (ans) + (rem * rem * rem);
        n = n / 10;
    }

    // condition to check
    if (temp == ans) {
        cout << ("Yes, it is Armstrong Number");
    }
    else {
        cout << ("No, it is not an Armstrong Number");
    }
    return 0;
}