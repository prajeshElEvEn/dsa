#include <iostream>
using namespace std;

int length(char name[])
{
    int l = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        l++;
    }
    return l;
}

int reverse(char name[], int l)
{
    for (int i = 0; i < l / 2; i++)
    {
        swap(name[i], name[l - 1 - i]);
    }
    return 0;
}

bool palindrome(char name[], int l)
{
    bool ans = true;
    for (int i = 0; i < l / 2; i++)
    {
        if (name[i] != name[l - 1 - i])
        {
            ans = false;
            return ans;
        }
    }
    return ans;
}

int main()
{
    cout << "-------------------------------------------------------------" << endl;
    cout << "Let's learn about Character Arrays and Strings in C++" << endl;
    cout << "-------------------------------------------------------------" << endl;

    // character array
    char name[20];
    cout << "[*] Enter your name: " << endl;
    cout << "> ";
    // cin stops execution with tab, space, enter
    cin >> name;
    cout << name << endl;
    int l = length(name);
    cout << "[*] Length of name: " << l << endl;
    reverse(name, l);
    cout << "[*] Reversed name:\n"
         << name << endl;
    cout << "[*] Palindrome or not: " << palindrome(name, l) << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << "by @eleven" << endl;
    cout << "-------------------------------------------------------------" << endl;

    return 0;
}
