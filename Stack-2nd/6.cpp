#include <bits/stdc++.h>
using namespace std;

void transfer(stack<int> &s1, stack<int> &s2, int n)
{
    for (int i = 0; i < n; i++)           //reversing a stack using 1 more stack        //2nd method
    {
        s2.push(s1.top());
        s1.pop();
    }
}

void reverseStack(stack<int> &s1)
{
    stack<int> s2;          //declaring a new stack
    int n = s1.size();
    for (int i = 0; i < n; i++)
    {
        int x = s1.top();
        s1.pop();
        transfer(s1, s2, n - i - 1);          //imp
        s1.push(x);
        transfer(s2, s1, n - i - 1);
    }
}

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    reverseStack(s);

    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}
