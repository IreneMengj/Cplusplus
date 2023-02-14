#include<iostream>
using namespace std;

int main(){
    int score=0;
    cout<<"please enter your university entrance exam"<<endl;
    cin>>score;
    if(score>600){
        if(score>700){
            cout<<"you can go to beida"<<endl;
        }else if(score>650){
            cout<<"you can go to renda"<<endl;
        }else{
            cout<<"you can go to yiben"<<endl;
        }
        
    }else if(score>500&&score<=600){
        cout<<"you can go to erben"<<endl;
    }else{
        cout<<"you can go to sanben"<<endl;
    }

}