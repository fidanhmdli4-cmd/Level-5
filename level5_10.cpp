#include <iostream>
using namespace std;

char getGrade(int score) {
    if (score >= 91) return 'A';
    if (score >= 81) return 'B';
    if (score >= 71) return 'C';
    if (score >= 61) return 'D';
    if (score >= 51) return 'E';
    return 'F';
}

int main() {
    int score;
    cout << "Balinizi daxil edin: ";
    cin >> score;

    cout << "Qiymet: " << getGrade(score);
    return 0;
}