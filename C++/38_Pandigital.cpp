#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Check if the string is a 1 to 9 pandigital number
bool isPandigital(const string &s) {
    if (s.length() != 9) return false;
    string sorted = s;
    sort(sorted.begin(), sorted.end());
    return sorted == "123456789";
}

int main() {
    int maxPandigital = 0;

    for (int x = 1; x < 10000; ++x) {
        string concatenated = "";
        int n = 1;

        while (concatenated.length() < 9) {
            concatenated += to_string(x * n);
            ++n;
        }

        if (isPandigital(concatenated)) {
            cout<<concatenated<<"\n";
            int num = stoi(concatenated);
            if (num > maxPandigital) {
                maxPandigital = num;
            }
        }
    }

    cout << "Largest 1 to 9 pandigital number (Problem 38): " << maxPandigital << endl;
    return 0;
}
