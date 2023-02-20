#include<iostream>
using namespace std;

class Person{
    friend ostream& operator<<(ostream &cout, Person &p);
public:    
    Person(int a, int b){
        this->a=a;
        this->b=b;
    }
private:
    
    int a;
    int b;    
};
ostream& operator<<(ostream &cout, Person &p){
    cout<<p.a<<p.b<<endl;
    return cout;
}
void test(){
    Person p1(2,3);
    cout<<p1<<endl;


}


int main(){
    test();
}