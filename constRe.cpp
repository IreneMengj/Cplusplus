#include<iostream>
using namespace std;

void print(const int &b){
    cout<<b<<endl;
}


int main(){
    int a =10;
    int &b=a;
    print(b);
}