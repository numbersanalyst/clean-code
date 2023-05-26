#include <iostream>
using namespace std;

int main()
{
    char word[]{"Hello World!"};

    for (const char &letter : word){cout << letter;}
    
    cout << endl;

    return 0;
}