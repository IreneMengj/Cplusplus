#include<iostream>
using namespace std;

class Person{
public:
    Person(){

    }  
    Person(string name,int age){
        this->name=name;
        this->age=age;
    } 
    Person& addAge(){
        age+=10;
        return *this;
    } 
    string name;
    int age;

};

void test(){
    Person p;
    p.age=10;
    p.addAge().addAge().addAge();
    cout<<p.age<<endl;
}


int main(){
    test();
}