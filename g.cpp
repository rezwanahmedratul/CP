#include <bits/stdc++.h>
using namespace std;
// fastread
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
// Shortcut
#define endl "\n"
#define int long long
#define float double
#define all(X) (X).begin(), (X).end()
#define Reverse(X) reverse(All(X))
#define Unique(X) (X).erase(unique((X).begin(), (X).end()), (X).end())
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define Yes cout << "Yes\n"
#define No cout << "No\n"
// MOD
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define INF 1001001001
// int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> R(n, 0), C(m, 0);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            R[i] ^= x;
            C[j] ^= x;
        }
    }

    int S = 0;
    for (int r : R)
        S += r;
    for (int c : C)
        S += c;

    int best = S;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int c = S - R[i] - C[j] + (R[i] ^ C[j]);
            if (c < best)
            {
                best = c;
            }
        }
    }

    cout << best << endl;
}

int32_t main()
{
    fastread();
    int tc = 1;
  
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case " << t << ": ";
        solve(); 
    }
    return 0;
}