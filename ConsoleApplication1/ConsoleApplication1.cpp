#include <fstream>
#include <iostream>
using namespace std;
int main()
{
    cout << "test1";
    ifstream myfile;
    myfile.open("TextFile0.txt");
    if (!myfile)return 0;
    int temp;
    myfile >> temp;
    cout << "test2";
    cout << temp;
    myfile.close();
    cout << "test3";
    cout.flush();
}
