#include<iostream>
using namespace std;

class Person{

public:
    static string name;
    int age;
};

string Person::name="irene";


int main(){

    Person p;
    p.name="irene1";
    cout<<Person::name<<endl;

}