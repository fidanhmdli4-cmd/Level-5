#include <iostream>
using namespace std;

int sumToN(int n) {
    int s = 0;
    for (int i = 1; i <= n; i++)
        s += i;
    return s;
}

int main() {
    int n;
    cout << "Eded daxil edin: ";
    cin >> n;

    cout << sumToN(n);
    return 0;
}