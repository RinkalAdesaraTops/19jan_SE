// compile time polymorphism
#include<iostream>
using namespace std;
class abc{
    public:
        void square(int x){
            cout<<"Square1 is "<<x*x<<endl; 
        }
        void square(double r){
            cout<<"Square2 is "<<r*r<<endl; 
        }
};
int main(){
    abc a1;
    a1.square(5);
    a1.square(67.88);
    // a1.square();

}