#include<iostream>
using namespace std;

class Person{
public:  
    Person operator+(Person &p){
        Person temp;
        temp.a=this->a+p.a;
        temp.b=this->b+p.b;
        return temp;
    }
    int b;
    int a;
};

void test(){
    Person p3;
    Person p1;
    Person p2;
    p1.a=20;
    p1.b=30;
    p2.a=30;
    p2.b=30;
    p3=p1.operator+(p2);
    cout<<p3.a<<endl;
    cout<<p3.b<<endl;
}



int main(){
    test();
}