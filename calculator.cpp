//The computer is realized by ordinary writing and polymorphic technology respectively
#include<iostream>
using namespace std;

class Calculator{
public:
    Calculator(){

    } 
    Calculator(int a,int b) {
        this->a=a;
        this->b=b;
    } 
    int add(){
        int sum= a+b;
        return sum;
    }
    int a;
    int b;
};

void test(){
    Calculator ca(3,4);
    cout<<ca.add()<<endl;

}
int main(){
    test();
}