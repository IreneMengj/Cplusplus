#include<iostream>
using namespace std;


struct student{
    string name;
    int age;
};
void pringStu(student s){
    cout<<s.name<<"+"<<s.age<<endl;
}

int main(){
    student s;
    s.name="irene";
    s.age=20;
    pringStu(s);
}

