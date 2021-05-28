#include <iostream>
#include <string>

using namespace std;

// You can tehcnically just use one loop here, but I was lazy lol.

int main() {
    int n;

    cin >> n; // Input

    string list = "";

    for (int i = 2; i <= n; i += 2) {
        list += to_string(i) + " ";
    }

    for (int i = 1; i <= n; i += 2) {
        list += to_string(i) + " ";
    }

    if (n > 1 && n < 4) {
        list = "NO SOLUTION";
    }

    cout << list;

    return 0;
}