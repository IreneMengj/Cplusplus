#include<iostream>
using namespace std;

struct Student{
    string name;
    int age;
    int score;
};

int main(){
    struct Student s1;
    s1.name="irene";
    s1.age=30;
    s1.score=100;
    cout<<"name: "<<s1.name<<endl;

    struct Student s2 = {"irene1",20,400};
    cout<<"name: "<<s2.name<<" age: "<<s2.age<<endl;
    system("pause");
    return 0;
}