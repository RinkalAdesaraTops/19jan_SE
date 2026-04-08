#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    fstream file("abc.txt");
    string line;

    if (file.is_open())
    {
        file << "\nAdding new line using fstream.";
        file.seekg(0);
        while (getline(file, line))
        {
            cout << line << endl;
        }
        file.close();
    }
    else
    {
        cout << "Unable to open file";
    }
}