#include<iostream>
using namespace std;

struct student
{  
    string name;
    int age;
};
int main(){
    student s = {"irene",20};
    student *p =&s;
    cout<<p->age<<endl;
}

