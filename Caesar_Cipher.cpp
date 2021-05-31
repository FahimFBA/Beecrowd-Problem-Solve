#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, i, j, k, len;
    cin >> t;   // taking test case
    char c[51]; // using for taking the sentence as input
    char s;
    for (i = 0; i < t; i++)
    {
        cin >> c; // taking the string
        cin >> j; // taking the value of the number of right shift
        getchar();
        len = strlen(c); // getting the length of the string

        for (k = 0; k < len; k++)
        {
            s = c[k] - j; // shifting
            if (s < 65)
            {
                s = s + 26; // wrapping around at the end of the alphabet
            }
            cout << s;
        }
        cout << "\n";
    }
}
