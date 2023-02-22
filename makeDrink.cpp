#include<iostream>
using namespace std;

class Drink{
public:
    //boil water
    virtual void boil()=0;
    //brew
    virtual void brew()=0;
    //pour in the cup
    virtual void pour()=0;
    //add tea or milk
    virtual void add()=0;

    void makeDrink(){
        boil();
        brew();
        pour();
        add();
    }
};

class Coffee: public Drink{
public:    
    //boil water
    virtual void boil(){
        cout<<"boil pure water"<<endl;
    };
    //brew
    virtual void brew(){
        cout<<"brew"<<endl;
    };
    //pour in the cup
    virtual void pour(){
        cout<<"pour in the coffee cup"<<endl;
    };
    //add tea or milk
    virtual void add(){
        cout<<"add coffee and milk"<<endl;
    };

};


void doWork(Drink *drink){
    drink->makeDrink();
    delete drink;
}

void test(){
    doWork(new Coffee);
}




int main(){
    test();
}