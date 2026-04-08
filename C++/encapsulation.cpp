#include <iostream>
#include <string>
using namespace std;
// wrapping up of data into single unit
class A{
    private:
        string str1;
        public:
            string getName(){
                return str1;
            }
            void setName(string name){
                str1=name;
            }
};
int main(){
    A obj;
    obj.setName("hello");
    cout<<"Name is "<<obj.getName();
}