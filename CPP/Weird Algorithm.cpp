#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    long long int n;
    cin >> n;

    string output = "" + to_string(n);

    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = (n*3)+1;
        }

        output += " " + to_string(n);
    }

    cout << output;
    return 0;
}
