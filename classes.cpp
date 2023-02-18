#include<iostream>
using namespace std;

class Phone{
public:
    Phone(){

    }
    Phone(string name){
        this->Pname=name;
    }
    string Pname;
};
class Person{
public:
    Person(string name,string Pname){
        this->name=name;
        this->phone=name;
    }
    string name;
    Phone phone;
};