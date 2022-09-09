#include <bits/stdc++.h>
using namespace std;
int numSetBits(unsigned int A)
{

    int count = 0, i;
    while (A)
    {
        count += A & 1;
        A = A >> 1;
    }
    return count;
}

int main()
{
    int i = 11;
    cout << numSetBits(i);
    return 0;
}