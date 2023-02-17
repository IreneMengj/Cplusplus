/*Design a student class, attributes have the name and student number, can assign the name and student number, can display the name and student number*/



#include<iostream>
using namespace std;

class Student{
public:
    void setName(string name){
        this->name=name;
    }
    void setNo(int studentNo){
        this->studentNo=studentNo;
    }
    void print(){
        cout<<name<<endl;
        cout<<studentNo<<endl;
    }
public:
    string name;
    int studentNo;
};


int main(){
    Student s;
    s.setName("irene");
    s.setNo(45312543);
    s.print();
}