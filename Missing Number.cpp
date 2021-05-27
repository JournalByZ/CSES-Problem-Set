#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;


int getMissingNo(vector<long long int> a, int n)
{
 
    long long int i, total=1;
     
    for ( i = 2; i<= (n+1); i++)
    {
        total += i;
        total -= a.at(i-2);
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

    cout << getMissingNo(a, a.size());

    return 0;
}