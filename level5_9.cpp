#include <iostream>
using namespace std;

bool isPalindrome(int n) {
    int original = n, rev = 0;

    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }

    return (rev == original);
}

int main() {
    int n;
    cout << "Eded daxil edin: ";
    cin >> n;

    if (isPalindrome(n)) cout << "Palindromdur";
    else cout << "Palindrom deyil";

    return 0;
}