#include<iostream>
using namespace std;
#include<fstream>

//Text file  write file

void test(){
    ofstream ofs;
    ofs.open("/Users/mengjiayu/Desktop/test.txt",ios::out);
    ofs<<"name:zhangsan"<<endl;
    ofs<<"sex:male"<<endl;
    ofs.close();
}


int main(){
    test();
}