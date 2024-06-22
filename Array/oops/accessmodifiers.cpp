#include<iostream>
#include<string>
using namespace std;
class Teacher{
private:
        double salary;
public:                   //Data and methods accessible to everyone
    string name;
    string department;
    string subject;

    void setSalary(double s){
        salary =s;
    }
    double getSalary() {
        return salary;
    }
};
int main(){
    Teacher t1;
    t1.name="Pradeep";
    t1.department="CS";
    t1.subject="c++";
    t1.setSalary(55000);

    cout<<t1.name<<endl;
    cout<<t1.getSalary() <<endl;
    return 0;
}