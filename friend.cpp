#include<iostream>
using namespace std;

class Person{
    friend class Student;
    friend void vistPerson();
public:    
    string name;
private:    
    int age; 
};
class Student{
public:    
    Student();
    void visit();
    Person *person;
};
Student::Student(){
    person = new Person();
}
void Student::visit (){
    person->name="haha";
    person->age=10;
}


void vistPerson(){
    Person p;
    p.name="irene";
    p.age=18;
}

int main(){

}
