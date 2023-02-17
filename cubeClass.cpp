// Designing a Cube class

// Find the area and volume of the cube

// Use the global function and the member function respectively to determine whether two cubes are equal.

#include<iostream>
using namespace std;

class Cube{
private:
    double l;
    double h;
    double w;
public:
    void setH(double h){
        this->h=h;
    }
    void setL(double l){
        this->l=l;
    }
    void setW(double w){
        this->w=w;
    }
    double getH(){
        return h;
    }
    double getL(){
        return l;
    }
    double getW(){
        return w;
    }
    double calArea(){
        double area = 2*w*l+2*l*h+2*h*w;
        return area;
    }
    double calVo(){
        double volume = l*w*h;
        return volume;
    }
    bool isSame(Cube &c){
        if(l==c.getL() && w==c.getW() && h==c.getH()){
            return true;
        }
        return false;
    }
};

int main(){
    Cube c1;
    Cube c2;
    c1.setL(2.5);
    c1.setH(2.9);
    c1.setW(3.6);
    c2.setH(1.2);
    c2.setL(1.5);
    c2.setW(1.9);
    cout<<c1.calArea()<<endl;
    cout<<c1.calVo()<<endl;
    cout<<c1.isSame(c2)<<endl;
}