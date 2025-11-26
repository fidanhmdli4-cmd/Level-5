#include <iostream>
using namespace std;

string checkNumber(int n) {
    if (n > 0) return "Musbet";
    if (n < 0) return "Menfi";
    return "Sifir";
}

int main() {
    int n;
    cout << "Eded daxil edin: ";
    cin >> n;

    cout << checkNumber(n);
    return 0;
}