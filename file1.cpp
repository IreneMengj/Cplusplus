#include<iostream>
using namespace std;
#include<fstream>
//text file read file

void test(){
    ifstream ifs;
    ifs.open("/Users/mengjiayu/Desktop/test.txt",ios::in);
    if(!ifs.is_open()){
        cout<<"Open file unsuccessfully"<<endl;
        return;
    }
    //first type
    // char buf[1024]={0};
    // while(ifs>>buf){
    //     cout<<buf<<endl;
    // }
    //second type
    // char buf[1024]={0};
    // while(ifs.getline(buf,sizeof(buf))){
    //     cout<<buf<<endl;
    // }
    //third type
    string buf;
    while(getline(ifs,buf)){
        cout<<buf<<endl;
    }

    ifs.close();

}

int main(){
    test();
}