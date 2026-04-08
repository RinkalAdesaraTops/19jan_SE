#include<iostream>
using namespace std;
class A{
    public:
        A(){
            cout<<"A constructor called"<<endl;
        }
        void dispA(int a,int b){
            cout<<"Addition is "<<a+b<<endl;
        }
};
class B:public A{
    public:
        B(){
            cout<<"B constructor called"<<endl;
        }
        void minus(int a,int b){
            cout<<"Minus is "<<a-b<<endl;
        }

};
class C:public A{
    public:
    C(){
            cout<<"C constructor called"<<endl;
        }
    void multiply(int a,int b){
            cout<<"Multiplication is "<<a*b<<endl;
        }
};
int main(){
    C obj1;
    obj1.multiply(25,5);
    obj1.dispA(25,5);
    B obj2;
    obj2.minus(100,45);
    obj2.dispA(100,45);

}