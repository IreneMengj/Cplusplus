#include<iostream>
using namespace std;

int main(){
    int arr[5]={23,90,84,7,34};
    int max=0;
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<"The max is: "<<max<<endl;
}