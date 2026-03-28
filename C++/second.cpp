#include<iostream>
using namespace std;
class emp{
    // access specifier = public private protected
    public:
        int a,b;
    public:
        void getData(){
            cout<<"Enter a&b:";
            cin>>a>>b;
        }
        void putData();
};
// Access using scope resolution operator
void emp :: putData(){
    cout<<"Multiplication is "<<a*b;
}
int main(){
    emp e1;
    e1.getData();
    e1.putData();
}