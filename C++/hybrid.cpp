#include<iostream>
using namespace std;
class A{
    public:
        A(){
            cout<<"Default A constructor"<<endl;
        }
        void dispA(){
            cout<<"Display A fun called."<<endl;
        }
};
class B:public virtual A{
    public:
        B(){
            cout<<"Default B constructor"<<endl;
        }
        void dispB(){
            cout<<"Display B fun called."<<endl;
        }
};

class C:public virtual A{
    public:
        C(){
            cout<<"Default C constructor"<<endl;
        }
        void dispC(){
            cout<<"Display C fun called."<<endl;
        }
};
class D:public B,public C{
    public:
        D(){
            cout<<"Default D constructor"<<endl;
        }
        void dispA(){
            cout<<"Display A - class D fun called."<<endl;
        }
};
int main(){
    D obj;
    obj.dispA();
    obj.dispB();
    obj.dispC();   
    obj.A::dispA();
}

