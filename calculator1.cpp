//The computer is realized by ordinary writing and polymorphic technology respectively
#include<iostream>
using namespace std;

class Calculator{
public:  
        Calculator(){}
        Calculator(int a,int b){
        this->a=a;
        this->b=b;
    } 
    virtual int cal(){
        return 0;
    }
    
    int a;
    int b;
};
class addCal:public Calculator{
public:    
    int cal(){
        return a+b;
    }

};
class mulCal:public Calculator{
public:    
    int cal(){
        return a*b;
    }
};


void test(){
    Calculator *cal = new addCal;
    cal->a=10;
    cal->b=20;
    cout<<cal->cal()<<endl;
}


int main(){
    test();
}