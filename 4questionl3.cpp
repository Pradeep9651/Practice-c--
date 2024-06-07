#include <iostream>
using namespace std;
int main()
{
	char x;
	cin >> x;
	if (isupper(x))
		cout << "Uppercase";
	else if(islower(x))
		cout << "Lowercase";

        else{
            cout<<"number";
        }

	return 0;
}
