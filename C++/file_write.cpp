#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream f1("abc.txt");
    f1<<"hjgsd hgfhjsd 12";   
    f1.close();

}