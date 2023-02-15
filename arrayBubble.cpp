#include<iostream>
using namespace std;

int main(){
    int arr[]={4,2,8,0,5,7,1,3,9};
    int temp=0;
    for(int i =0;i<sizeof(arr)/sizeof(arr[0]);i++){
        for(int j=0;j<(sizeof(arr)/sizeof(arr[0]))-1;j++){
            if(arr[j+1]<arr[j]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        
        
    }
    for(int h=0;h<sizeof(arr)/sizeof(arr[0]);h++){
        cout<<arr[h]<<endl;
    }
}