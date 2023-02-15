#include<iostream>
using namespace std;


struct student{
    string name;
    int age;
};
void pringStu(student *p){
    p->name="meng";
    cout<<p->name<<"+"<<p->age<<endl;
}

int main(){
    student s;
    s.name="irene";
    s.age=20;
    pringStu(&s);
}

