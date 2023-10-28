#include <bits/stdc++.h>
using namespace std;

const int p1 = 137, mod1 = 127657753, p2 = 277, mod2 = 987654319;

const int N = 1e5 + 9;

pair<int,int> pw1[N];
void prec()
{
    pw1[0].first = 1;
    pw1[0].second = 1;
    for (int i = 1; i < N; i++)
    {
        pw1[i].first = 1LL * pw1[i - 1].first * p1 % mod1;
        pw1[i].second = 1LL * pw1[i - 1].second * p1 % mod1;
    }
    
}
pair<int, int> string_hash(string s)
{
    int n = s.size();
    pair<int, int> hs({0, 0});
    for (int i = 0; i < n; i++)
    {
        hs.first += 1LL * s[i] * pw1[i].first % mod1;
        hs.first %= mod1;
        hs.second += 1LL * s[i] * pw1[i].second % mod2;
        hs.second %= mod2;
    }
    return hs;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    prec();
    
    return 0;
}