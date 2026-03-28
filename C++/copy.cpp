#include<iostream>
using namespace std;
class abc{
    public:
        int a,b;
    public:
        abc(){
            cout<<"Default constructor called..."<<endl;
        }
        abc(int p,int q){
            a=p;
            b=q;
        }
        abc(abc &obj){
            a=obj.a;
            b=obj.b;
        }
        void dispData(){
            cout<<"A is "<<a<<endl;
            cout<<"B is "<<b<<endl;
        }
        ~abc(){
            cout<<"Destructor called.."<<endl;
        }
};
int main(){
    abc a1;
    abc a2(10,20);
    a2.dispData();
    abc a4(35,55);
    abc a3(a4);
    a3.dispData();

}