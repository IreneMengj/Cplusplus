#include<iostream>
using namespace std;

class Person;
class Student{
public:    
    Student();
    void visit();
private:    
    Person *person;
};

class Person{
    friend void Student::visit();
public:    
    Person();
    string name;
private:    
    int age;
};


Person::Person(){
    this->name="irene";
    this->age=19;
}
Student::Student(){
    person=new Person();
}
void Student::visit(){
    person->name="haha";
    person->age=10;
}

int main(){
    
}