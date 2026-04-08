#include <iostream>
using namespace std;
// data hiding
class ABc{ //abstarct class
    public:
    virtual void show()=0; //pure virtual function
};
class Xyz:public ABc{
    public:
        void show(){
            cout<<"Virtual func called..";
        }
};
int main(){
    Xyz x1;
    x1.show();
}