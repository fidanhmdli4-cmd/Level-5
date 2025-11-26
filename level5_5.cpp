#include <iostream>
using namespace std;

long long factorial(int n) {
    long long f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

int main() {
    int n;
    cout << "Eded daxil edin: ";
    cin >> n;

    cout << factorial(n);
    return 0;
}