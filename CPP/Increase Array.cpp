#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

long long int IncreasingArray(vector<long long int> a) {
    long long int total = 0;

    // 3 2 5 1 7
    for (int i = 1; i < a.size(); i++) {
        if (a.at(i) < a.at(i-1)) {
            total += a.at(i-1) - a.at(i);
            a[i] += a.at(i-1) - a.at(i);
        }
    }

    return total;
}

int main() {
    int n;
    vector<long long int>a;

    cin >> n; 

    cin.ignore();
    string line;
    getline(cin, line);

    istringstream iss(line);
    int num;
    while (iss >> num)
    {
        a.push_back(num);
    }

    cout << IncreasingArray(a);

    return 0;
}
