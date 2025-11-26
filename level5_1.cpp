#include <iostream>
using namespace std;

int maxTwo(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int a, b;
    cout << "Iki eded daxil edin: ";
    cin >> a >> b;

    cout << "Boyuk eded: " << maxTwo(a, b);
    return 0;
