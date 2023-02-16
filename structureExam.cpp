#include<iostream>
using namespace std;

struct student{
    string name;
    int age;

};

struct teacher {
    string name;
    student arr[5];
};

void setMethod(teacher * arr,int n){
    arr->name;
    arr->arr->name;
    arr->arr->age;
    
    while(n>0){
        cout<<"please enter your name"<<endl;
        cin>>arr->name;
        int j=5;
        while(j>0){
            cout<<"please enter student name"<<endl;
            cin>>arr->arr->name;
            cout<<"please enter student age"<<endl;
            cin>>arr->arr->age;
            j--;
        }
        
        n--;
    }
}
void print(teacher *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i].name<<endl;
        cout<<arr[i].arr->name<<endl;
    }
}

int main(){
    teacher arr[3];
    int length =3;
    setMethod(arr,length);
    print(arr,length);
}