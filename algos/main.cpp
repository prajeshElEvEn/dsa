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

    // max(a, b);
    cout << "[*] Max of 2, 3 is: " << max(2, 3) << endl;
    // min(a, b);
    cout << "[*] Min of 2, 3 is: " << min(2, 3) << endl;
    // swap(a, b);

    // string operations
    string s = "bd";
    cout << "[*] s: " << s << endl;
    reverse(s.begin(), s.end());
    cout << "[*] Reversed s: " << s << endl;

    // rotate vector
    cout << "[*] Vector before rotation: " << endl;
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << "\n[*] Vector after rotation: " << endl;
    rotate(v.begin(), v.begin() + 2, v.end());
    for (auto i : v)
    {
        cout << i << " ";
    }
    // sorting
    // known as Intro Sort
    // is a combination of 3 sorts - quick, heap, insertion
    sort(v.begin(), v.end());
    cout << "\n[*] Intro Sort: " << endl;
    for (auto i : v)
    {
        cout << i << " ";
    }

    cout << "\n-----------------------------------------------" << endl;
    cout << "by @eleven" << endl;
    cout << "-----------------------------------------------" << endl;
    return 0;
}
