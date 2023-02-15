#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int * p =arr;
    // cout<<*p<<endl;
    // p++;
    // cout<<*p<<endl;
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cout<<*p++<<endl;
    }
    system("pause");
    return 0;
}