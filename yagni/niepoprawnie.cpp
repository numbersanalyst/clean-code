#include <iostream>
#include <string>
using namespace std;

void multiPrint(const string &word, int number) {
  for (int i = 0; i < number; i++) {
    cout << word << endl;
  }
}
// Nie ma sensu trzymać tej funkcji tutaj
// Program wyświetla napis tylko raz

int main() {
  string word = "Hello World!";

  cout << "Print Hello World once:" << endl;
  cout << word << endl;

  return 0;
}