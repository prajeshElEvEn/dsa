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

    // stack
    // lifo - last in first out
    // insertion/deletion at top
    stack<string> s;
    cout << "[*] Stack:\n";
    // insertion
    s.push("e");
    s.push("l");
    s.push("e");
    s.push("v");
    s.push("e");
    s.push("n");
    // displaying top element - last inserted element
    cout << "[*] Top element: " << s.top();
    // deleting element - deletes top element
    s.pop();
    cout << "\n[*] Top element after a pop: " << s.top();

    cout << "\n-----------------------------------------" << endl;

    // queue
    // fifo - first in first out
    // insertion/deletion at front
    queue<string> q;
    cout << "[*] Queue:\n";
    // insertion
    q.push("e");
    q.push("l");
    q.push("e");
    q.push("v");
    q.push("e");
    q.push("n");
    // displaying front element
    cout << "[*] Top element: " << q.front();
    // deleting element - deletes front element
    q.pop();
    cout << "\n[*] Top element after a pop: " << q.front();

    cout << "\n-----------------------------------------" << endl;

    // priority Queue
    // first/front element will always be greatest
    // it is actually max heap
    // max heap - when taking out elements, we always get maximum element
    priority_queue<int> maxh;
    maxh.push(1);
    maxh.push(5);
    maxh.push(2);
    maxh.push(4);
    maxh.push(3);
    cout << "[*] Priority Queue - Max Heap:\n";
    int nmax = maxh.size();
    for (int i = 0; i < nmax; i++)
    {
        cout << maxh.top() << " ";
        maxh.pop();
    }
    // mix heap - when taking out elements, we always get minimum element
    priority_queue<int, vector<int>, greater<int>> minh;
    minh.push(1);
    minh.push(5);
    minh.push(2);
    minh.push(4);
    minh.push(3);
    cout << "\n[*] Priority Queue - Min Heap:\n";
    int nmin = minh.size();
    for (int i = 0; i < nmin; i++)
    {
        cout << minh.top() << " ";
        minh.pop();
    }

    cout << "\n-----------------------------------------" << endl;
    cout << "by @eleven" << endl;
    cout << "-----------------------------------------" << endl;
    return 0;
}
