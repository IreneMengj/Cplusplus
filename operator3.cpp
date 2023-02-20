#include<iostream>
using namespace std;

class Person{
public:
    Person(string name,int age){
        this->name=name;
        this->age=age;
    }
    bool operator==(Person &p){
        if(this->name==p.name&&this->age==p.age){
            cout<<"two p is equal"<<endl;
            return true;
        }else{
            cout<<"two p is different"<<endl;
        }
        return false;
    }
    
    string name;
    int age;
};

void test(){
    Person p1("irene",18);
    Person p2("irene",18);
    p1==p2;
}


int main(){
  test();
}