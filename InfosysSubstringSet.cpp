#include <bits/stdc++.h>
using namespace std;
string subseq(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return "";
    }

    char ch = s[0];
    string ros = s.substr(1);
    subseq(ros, ans);
    subseq(ros, ans + ch);
}
int main()
{

    cout << subseq("ABC", "");
    return 0;
}