#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "-----------------------------------------" << endl;
    cout << "Let's learn about STL in C++" << endl;
    cout << "-----------------------------------------" << endl;

    // array
    // static memory allocation of similar data type
    array<int, 5> a = {1, 2, 3, 4, 5};
    // printing array
    cout << "[*] Array:\n";
    for (int i : a)
    {
        cout << i << " ";
    }
    // printing at specific index
    cout << "\n[*] Element at index 3 is: " << a.at(3);
    // is empty
    cout << "\n[*] If array is empty: " << a.empty();
    // front
    cout << "\n[*] Front element: " << a.front();
    // back
    cout << "\n[*] Back element: " << a.back();

    cout << "\n-----------------------------------------" << endl;

    // vector
    // doubles it size for beyond accessing of it's size - dumps the older vector - dynamic size
    vector<int> v;
    // vector<int> v2(size, initialise by);
    vector<int> v2(5, 1);
    // copy vector v2 to v3
    vector<int> v3(v2);
    // insertion in vector
    for (int i = 1; i < 6; i++)
    {
        v.push_back(i);
    }
    // printing vector
    cout << "[*] Vector:\n";
    for (int i : v)
    {
        cout << i << " ";
    }
    // check capacity - how many elements it can store
    cout << "\n[*] Capacity: " << v.capacity();
    // size of vector - elements present
    cout << "\n[*] Size: " << v.size();
    // remove last element
    v.pop_back();
    // delete all elements from an array
    v.clear();
    cout << "\n[*] Capacity after clear: " << v.capacity();
    cout << "\n[*] Size after clear: " << v.size();

    cout << "\n-----------------------------------------" << endl;

    // deque
    //  double ended queue - can perform push/pop at both ends
    // is dynamic - can be implemented using arrays
    deque<int> d;
    cout << "[*] Deque:\n";
    d.push_back(2);
    d.push_front(1);
    for (int i : d)
    {
        cout << i << " ";
    }

    cout << "\n-----------------------------------------" << endl;
    cout << "by @eleven" << endl;
    cout << "-----------------------------------------" << endl;
    return 0;
}
