#include<iostream>
using  namespace std;
int main(){
    int a =0;
    int b =0;
    int c=0;
    cout<<"please enter the weight of a"<<endl;
    cin>>a;
    cout<<"please enter the weight of b"<<endl;
    cin>>b;
    cout<<"please enter the weight of b"<<endl;
    cin>>c;
    int heavier =0;
    if(a>b){
        heavier=a;
        if(a>c){
            cout<<"a has the highest weight"<<endl;
        }else{
            cout<<"c has the highest weight"<<endl;
        }
    }else{
        heavier=b;
        if(b>c){
            cout<<"b has the highest weight"<<endl;
        }else{
            cout<<"c has the highest weight"<<endl;
        }
    }
}