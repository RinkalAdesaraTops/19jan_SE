#include<iostream>
using namespace std;
class A{
    public:
        A(){
            cout<<"A class constructor "<<endl;
        }
        void add(){
            cout<<"Add func called."<<endl;
        }
};
class B : public A
{
    public:
        B(){
            cout<<"B class constructor "<<endl;
        }
        void minus(){
            cout<<"minus func called."<<endl;

        }
};
class C : public B{
    public:
        C(){
            cout<<"C class constructor "<<endl;
        }
        void multiply(){
            cout<<"Multiply func called."<<endl;

        }
};
int main(){
    C obj;
    obj.multiply();
    obj.minus();
    obj.add();
}