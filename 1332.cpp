#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test, i;
    char str[1000];
    cin >> test;
    for (i = 0; i < test; i++)
    {
        cin >> str;
        int len = strlen(str);
        if (len == 5)
        {
            cout << "3" << endl;
        }
        else if (str[0] == 't' && str[1] == 'w' || str[0] == 't' && str[2] == 'o' || str[1] == 'w' && str[2] == 'o')
        {
            cout << "2" << endl;
        }
        else
        {
            cout << "1" << endl;
        }
    }
}