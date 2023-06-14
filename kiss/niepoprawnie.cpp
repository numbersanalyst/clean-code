#include <iostream>
using namespace std;

int main() {
  char word[]{"Hello World!"};

  for (const char &letter : word) {
    cout << letter;
  }

  cout << endl;

  // Po co komu tutaj iteracja po tablicy
  // Jeżeli program ma wyświetlić napis "Hello World"
  // to niech to jak naprościej zrobi
  
  return 0;
}