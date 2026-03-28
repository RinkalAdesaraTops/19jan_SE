#include<iostream>
using namespace std;
class User{
    public:
        // special member function
        // when object is created constructor automatically called..
        User(){
            cout<<"Default constructor called.."<<endl;
        }
        User(int a,int b){
            cout<<"Addition is "<<a+b;
        }
        void getData(){
            cout<<"Getdata function called.."<<endl;
        }
};
int main(){
    cout<<"Main func called.."<<endl;
    User u1;
    u1.getData();
    User u2(25,10);
}