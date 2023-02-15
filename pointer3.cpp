#include<iostream>
using namespace std;

void reverse(int *arr,int n);
void reverse(int *arr,int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int main(){
    int arr[]={1,2,7,43,23,675,67421};
    int *p=arr;
    int n = sizeof(arr)/sizeof(arr[0]);
    reverse(arr,n);
    for(int i=0;i<n;i++){
        cout<<*p++<<endl;
    }
    system("pause");
    return 0;
}