#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s[3][n];
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < n; j++)
                cin >> s[i][j];
        unordered_map<string, int> m;
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < n; j++)
                m[s[i][j]]++;
        for (int i = 0; i < 3; i++)
        {
            long c = 0;
            for (int j = 0; j < n; j++)
            {
                if (m[s[i][j]] == 1)
                    c += 3;
                else if (m[s[i][j]] == 2)
                    c++;
            }
            cout << c << " ";
        }
        cout << endl;
    }
}