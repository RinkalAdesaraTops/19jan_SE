#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    fstream f1("abc.txt");
    string str;
    while(getline(f1,str)){
        cout<<str<<endl;
    }
    f1.close();

}