#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int size 10001;
    int arr[size];

    ifstream myfile;
    myfile.open("TextFile1.txt");
    for (int i = 0; i < size; i++)
        (
            myfile >> arr[i];
            )
    
    myfile.close();

}

