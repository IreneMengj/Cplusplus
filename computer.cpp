// The main components of a computer are the CPU (for computing), the graphics card (for display), and the memory bar (for storage).

// Encapsulate each part into an abstract base class and provide different manufacturers to make different parts, such as Intel and Lenovo

// The create Computer class provides the functions that make the computer work and the interfaces that call each part to work

#include<iostream>
using namespace std;

class CPU{
public: 
    virtual void calculate()=0;
};

class VideoCard{
public: 
    virtual void display()=0;
};

class Memory{
public: 
    virtual void store()=0;
};

class Computer{
public:   
    Computer(CPU *C,VideoCard * ve,Memory *me){
        CPU=C;
        v=ve;
        m=me;
    }
    void work(){
        CPU->calculate();
        v->display();
        m->store();
    }
    ~Computer()
	{

		//释放CPU零件
		if (CPU != NULL)
		{
			delete CPU;
			CPU = NULL;
		}

		//释放显卡零件
		if (v != NULL)
		{
			delete v;
			v = NULL;
		}

		//释放内存条零件
		if (m != NULL)
		{
			delete m;
			m = NULL;
		}
	}
private:
    CPU *CPU;
    VideoCard * v;
    Memory *m;    
};

class IntelCPU:public CPU{
public:
    virtual void calculate(){
        cout<<"Intel CPU WORKS"<<endl;
    }    
};
class IntelVedio:public VideoCard{
public:
    virtual void display(){
        cout<<"Intel video card WORKS"<<endl;
    }    
};
class IntelMemory:public Memory{
public:
    virtual void store(){
        cout<<"Intel memory WORKS"<<endl;
    }    
};
void test(){
    CPU *INTELCPU=new IntelCPU;
    VideoCard *INTELVe=new IntelVedio;
    Memory *INTELMe=new IntelMemory;
    Computer *com=new Computer(INTELCPU,INTELVe,INTELMe);
    com->work();
    delete com;
}

int main(){
    test();

}