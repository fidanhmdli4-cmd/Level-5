#include <iostream>
using namespace std;

string findSeason(int month) {
    if (month == 12 || month == 1 || month == 2) return "Qis";
    if (month >= 3 && month <= 5) return "Yaz";
    if (month >= 6 && month <= 8) return "Yay";
    if (month >= 9 && month <= 11) return "Payiz";
    return "Yanlis ay!";
}

int main() {
    int m;
    cout << "Ay nomresi daxil edin: ";
    cin >> m;

    cout << findSeason(m);
    return 0;
}