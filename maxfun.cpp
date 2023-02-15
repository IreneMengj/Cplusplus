#include<iostream>
using namespace std;
int max(int a,int b){
    return a>b?a:b;
}

int main(){
    int i=4;
    int j=6;
    cout<<max(i,j)<<endl;
    system("pause");
    return 0;
}