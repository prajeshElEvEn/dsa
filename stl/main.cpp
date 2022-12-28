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
    // add from back
    d.push_back(2);
    // add from front
    d.push_front(1);
    // printing deque
    for (int i : d)
    {
        cout << i << " ";
    }
    // erase function - removes elements from-to
    d.erase(d.begin(), d.begin() + 1);
    cout << "\n[*] Deque after erasing first element:\n";
    for (int i : d)
    {
        cout << i << " ";
    }

    cout << "\n-----------------------------------------" << endl;

    // list
    //  implemented using doubly linked list
    // has 2 pointers - front and back
    // cannot access element without traversal i.e., cannot use at() fn
    list<int> l;
    // insertion
    l.push_back(2);
    l.push_front(1);
    // printing list
    cout << "[*] List:\n";
    for (int i : l)
    {
        cout << i << " ";
    }
    // delete element at iterator
    l.erase(l.begin());
    cout << "\n[*] List after deleting first element:\n";
    for (int i : l)
    {
        cout << i << " ";
    }

    cout << "\n-----------------------------------------" << endl;
    cout << "by @eleven" << endl;
    cout << "-----------------------------------------" << endl;
    return 0;
}
