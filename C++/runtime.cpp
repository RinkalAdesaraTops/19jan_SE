#include<iostream>
using namespace std;
class abc{
    public:
        virtual void display(){
            cout<<"Display A called..";
        }
};
class xyz:public abc{
    public:
        void display(){
            cout<<"Display B called..";
        }
};
int main(){
    xyz x1;
    abc *p1;
    p1=&x1;
    // x1.display();
    p1->display();
    x1.abc::display();

}