#include<iostream>
using namespace std;

struct Student{
    string name;
    int age;
    int score;
};



int main(){
   Student arr[3]={
    {"irene",50,300},
    {"irene1",100,300},
    {"irene2",90,300}
   };
   for(int i=0;i<3;i++){
    cout<<arr[i].name<<
    arr[i].age<<
    arr[i].score<<endl;
   }
}