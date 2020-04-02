/*
auth - @sportykush
*/

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
 
using namespace __gnu_pbds;
using namespace std;
 
typedef long long int ll;
typedef long double ld;
typedef tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update> ordered_set; 
 
//#define mp make_pair
#define bug(x) cout << x << endl
#define ERASE(x) x.erase(unique(x.begin(),x.end()),x.end())
#define pb emplace_back
#define vii vector<int>
#define vll vector<ll>
#define vpll vector< pair <ll,ll> >
#define pll pair <ll,ll>
#define pii pair <int,int>
#define pq priority_queue< int >
#define khtm "\n"
#define F first
#define S second
#define fr(i,a,n) for(i=a;i<n;i++)
#define mem(arr,l) memset(arr,l,sizeof arr)
#define ALL(x) x.begin(), x.end()
#define frr(i,a,n) for(i=n-1;i>=a;i--)
//#define mod 1000000007
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define testcase ll T; cin>>T; while(T--)
const int MAX = 1e6 +2;
const int inf = (int) 1e9;
const int N = 1010;
/*
important builtin functions
__gcd(value1, value2)
__builtin_ffs(x)
  Number of leading zeroes: __builtin_clz(x)
  Number of trailing zeroes : __builtin_ctz(x)
  Number of set bits: __builtin_popcount(x)
*/
 

ll i,j,k,l,m,r,n;
// ll a[MAX];
string s[202];
ll dp[202][202];

ll rec(ll i , ll j)
{
  if(j < 0 || j >= m || i >= n || i < 0 || s[i][j] == '#' )
    return 0;
  if(dp[i][j] != -1)
    return dp[i][j];

  ll c = 0;
  if(s[i][j] == 'T')
    c++;
  //1 right 0 left
  if(!(i&1))
     return dp[i][j] = max(rec(i+1,j),rec(i,j+1)) + c;
  else
     return dp[i][j] = max(rec(i,j-1),rec(i+1,j)) + c;

 // dp[i][j];
}

ll find_max(ll r, ll c)
{
  ll ans = 0;
  fr(i,0,r)
    fr(j,0,c)
      ans = max(dp[i][j],ans);
  return ans;
}
//1 right 0 left

int main()
{
 
  #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
//cout << setprecision(15) << fixed;
fast

testcase
{
  cin >> n >> m;
  //cout << "x";
  mem(dp,-1);
  fr(i,0,n){
    cin >> s[i];
    if(i&1)
      s[i]+='0'; //left
    else
      s[i]+='1'; //right
  }
  cout<<rec(0,0);
  cout << khtm;
}


  #ifndef ONLINE_JUDGE
  cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s";
  #endif
 
  return 0;
 
}