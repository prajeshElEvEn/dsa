#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "-----------------------------------------------" << endl;
    cout << "Let's learn about Algorithms in C++" << endl;
    cout << "-----------------------------------------------" << endl;

    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(7);
    v.push_back(12);

    // binary search
    // returns true if element is present in the array
    cout << "[*] Binary Search:\n[*] Searching if 3 is present or not: " << binary_search(v.begin(), v.end(), 3) << endl;

    cout << "-----------------------------------------------" << endl;
    cout << "by @eleven" << endl;
    cout << "-----------------------------------------------" << endl;
    return 0;
}
