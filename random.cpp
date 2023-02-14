#include<iostream>
using namespace std;

int main(){
    int i = rand()%100;
    int input =0;
    while(true){
cout<<"please enter your number"<<endl;
    cin>>input;
    
    if(i==input){
        cout<<"You are right"<<endl;
        break;
    }else if(i>input){
        cout<<"it is too small"<<endl;
    }else{
        cout<<"it is too big"<<endl;
    }
    }
    
}