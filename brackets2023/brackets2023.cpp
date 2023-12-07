// brackets2023.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
long long factorial(long long i)
{
    if (i == 0) return 1;
    else return (i * factorial(i - 1));
}
int main()
{
    long long N;
    cin >> N;
    if ((N - 2) % 4 != 0)
    {
        cout << 0;
        return 0;
    }
    N = (N - 2) / 4;
    long double ans = 1;
    for (long long i = 1; i < N+1; i++)
    {
        ans *= 2;
        if (ans >= 1000000007)
        {
            ans = fmod(static_cast<long double>(ans), 1000000007);
        }
    }
    ans /= factorial(N + 1);
    for (long long k = 1; k < N + 1; k++)
    {
        ans *= (2 * k - 1);
        if (ans >= 1000000007)
        {
            ans = fmod(static_cast<long double>(ans), 1000000007);
        }
    }
    cout << static_cast<int>(ceil(ans));
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
