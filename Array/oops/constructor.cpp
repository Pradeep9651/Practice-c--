#include<iostream>
using namespace std;
#include<string>
class Example {
    private:
        string attribute;

    public:
        // Default constructor
        Example() {
            attribute = "default value";
        }

        // Parameterized constructor
        Example(string value) {
            attribute = value;
        }

        // Copy constructor
        Example(const Example &other) {
            attribute = other.attribute;
        }
};

// Creating instances
Example obj1;
Example obj2("custom value");
Example obj3 = obj2;
