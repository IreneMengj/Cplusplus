#include<iostream>
using namespace std;

int main(){
    for(int i=1;i<101;i++){
        int ge=i%10;
        int shi=i/10%10;
        if(ge==7||shi==7||i%7==0){
            cout<<"knock knock"<<endl;
        }else{
            cout<<i<<endl;
        }
    }
}