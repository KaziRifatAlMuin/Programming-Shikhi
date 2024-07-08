#include <iostream>  // Header File
using namespace std;

int main()
{
    int a = 1000;
    double b = 120.23;
    char c;
    //int i = 0;
    for(int i = 0; i <= 128; i++){
        c = i; // i = ASCII value of char c
        cout << i << " " << c << "\n";
    }
    return 0;
}
