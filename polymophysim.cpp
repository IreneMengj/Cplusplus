#include<iostream>
using namespace std;

class Person{
public:
    virtual void eat(){
        cout<<"people eat"<<endl;
    }

};
class Student: public Person {
    void eat(){
        cout<<"Student needs to eat"<<endl;
    }
};

void doEat(Person &p){
    p.eat();
}

void test(){
    Student student;
    doEat(student);
}



int main(){
    test();
}