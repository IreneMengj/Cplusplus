#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    int end=(sizeof(arr)/sizeof(arr[0]))-1;
    int start=0;
    int temp=0;
    while(start<end){
        temp=arr[start];
        arr[start++]=arr[end];
        arr[end--]=temp;
    }
    for(int j=0;j<5;j++){
        cout<<arr[j]<<endl;
    }
}