#include<iostream>
using namespace std;

int main(){
    int score = 0;
    cout<<"please enter your score"<<endl;
    cin>>score;
    if(score>600){
        cout<<"you can go to yiben"<<endl;
    }else if(score>500 && score<600){
        cout<<"you can go to erben"<<endl;
    }else{
        cout<<"you failed"<<endl;
    }
}