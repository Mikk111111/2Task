#include <fstream>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string tekstas;
    cout << "test1";
    ifstream myfile;
    myfile.open("TextFile1.txt");
    vector<string> informacija;
    if (!myfile)return 0;
    while (myfile>>tekstas) 
    {
        informacija.push_back(tekstas);
    }
    for (string data : informacija)
    {
        cout << data << endl;
    }
    cout.flush();
    myfile.close();
}
