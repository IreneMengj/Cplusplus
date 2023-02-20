#include<iostream>
using namespace std;

class MyInteger {
    friend ostream& operator<<(ostream &cout, MyInteger myInteger);
public:
    MyInteger(){
        a=0;
    }
    MyInteger& operator++(){
    a++;
    return *this;
}
private: 
    int a;
};

ostream& operator<<(ostream &cout, MyInteger myInteger){
    cout<<myInteger.a<<endl;
    return cout;
}

void test(){
    MyInteger myInteger;
    cout<<++myInteger<<endl;
}


int main(){
    test();

}