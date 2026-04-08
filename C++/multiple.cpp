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
class B{
    public:
        B(){
            cout<<"Default B constructor"<<endl;
        }
        void dispB(){
            cout<<"Display B fun called."<<endl;
        }
};
class C:public A,public B{
    public:
        C(){
            cout<<"Default C constructor"<<endl;           
        }
        void dispC(){
            cout<<"Display C fun called."<<endl;
        }
};
int main(){
    C obj;
    obj.dispC();
    obj.dispA();
    obj.dispB();
}