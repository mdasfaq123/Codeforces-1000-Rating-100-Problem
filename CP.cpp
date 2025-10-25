// palindrome or not
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int a;
        cin >> a;
        string s;
        cin >> s;
        map < char, int > m;
        for(int i = 0; i < s.size(); i++)
        {
            m[s[i]]++;
        }
        int odd = 0;
        int even = 0;
        if(s.size() % 2 == 0)
        {
            for(auto x : m)
            {
                if(x.second % 2 == 0)
                {
                    even++;
                }
                else
                {
                    odd++;
                }
            }
            if(odd == 0)
            {
                cout << "the stars align, my power ignites!" << endl;
            }
            else
            {
                cout << "the curse awakens, wings of the raven rise :(" << endl;
            }
        }
        else
        {
            for(auto x : m)
            {
                if(x.second % 2 == 0)
                {
                    even++;
                }
                else
                {
                    odd++;
                }
            }
            if(odd == 1 && (s.size() - odd) % 2 == 0)
            {
                cout << "the stars align, my power ignites!" << endl;
            }
            else
            {
                cout << "the curse awakens, wings of the raven rise :(" << endl;
            }
        }
    }
    return 0;
}
