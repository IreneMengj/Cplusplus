#include<iostream>
using namespace std;

class Student{

public:
    
    Student(){

    }
    Student(string name, int age,int height){
        this->name=name;
        this->age=age;
        this->height=new int(height);
    }
    ~Student(){
        if( height!=NULL){
            delete height;
            height=NULL;
        }
    }
    
public:
    string name;
    int age;  
    int *height;  
};

int main(){

}