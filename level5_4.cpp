#include <iostream>
using namespace std;

void printEvenTo100() {
    for (int i = 2; i <= 100; i += 2)
        cout << i << " ";
}

int main() {
    printEvenTo100();
    return 0;
}