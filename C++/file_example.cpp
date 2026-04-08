// open/creating a file
// reading a file
// writing a file
// closing file
#include<iostream>
#include<fstream>
using namespace std;
// #include<ofstream>
int main(){
    ofstream file("abc.txt");
    if(file.is_open()){
        cout<<"File created..";
    } else {
        cout<<"File not exist";
    }
    file.close();
}
