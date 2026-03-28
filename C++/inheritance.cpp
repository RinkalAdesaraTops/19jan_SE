#include<iostream>
using namespace std;
class abc{
    public:
        int a,b;
        abc(){
            cout<<"Default Abc constructor called.."<<endl;
        }
        abc(int p,int q){
            cout<<"Abc constructor called.."<<endl;
            a=p;
            b=q;
        }
        void multiply(){
            cout<<"Multiplication is "<<a*b<<endl;
        }
};
class xyz:public abc{
    public:
        int p,q;
        xyz(int x,int y) : abc(x,y)
        {
            p=x;
            q=y;
            cout<<"xyz constructor called.."<<endl;
        }
        void minus(){
            cout<<"Minus is "<<p-q<<endl;
        }
};
int main(){
    xyz x1(25,10);
    x1.multiply();
    x1.minus();
}