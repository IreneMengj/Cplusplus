#include<iostream>
using namespace std;

class Person{
public:
    Person(){}
    Person(int age){
        this->age=age;
    }
    
    static int age;    

};
int Person::age=20;
class Student:public Person{
public:
    static int age;        
};
int Student::age=30;

void test(){
    Student s;
    cout<<s.age<<endl;
    cout<<s.Person::age<<endl;
}

int main(){
    
}