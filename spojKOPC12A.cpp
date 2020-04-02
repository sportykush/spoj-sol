#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define mp make_pair
#define pb push_back
#define vll vector<ll>
#define vpll vector< pair <ll,ll> >
#define pll pair <ll,ll>
#define pq priority_queue< int >
#define khtm "\n"
#define F first
#define S second
#define fr(i,a,n) for(i=a;i<n;i++)
#define frr(i,a,n) for(i=n;i>a;i--)
#define mod 1e9+7
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define testcase int T; cin>>T; while(T--)
const int MAXN = 1000005;
 
/*Author-KUSHAGRA SINGH
Birla Institute of Technology Mesra
CS K18
*/
 
 
// ll i,n,j,m,k;

ll check(vll v ,vll c, ll h){
    ll sum = 0;
    for(int i = 0 ; i < v.size() ; i++){
        ll diff = abs(v[i] - h);
        sum += diff*c[i];
    }
    return sum;
}


ll binary_search(vll v, vll c){
	ll l = 0 , mid , r = INT_MAX;
    ll p , n , m , ans = LLONG_MAX;
    while(l<r){
        mid = (l+r)/2;
        mid > 0 ? p = check(v , c , mid-1): INT_MAX;
        m = check(v , c , mid);
        n = check(v , c , mid+1);
        if(ans == m)
            break;
        ans = min(ans , m);
        if(p <= m)
            r = mid;
        else if(n <= m)
            l = mid+1;
    }
    return ans;
}

int main (){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin); 
freopen("output.txt", "w", stdout);
#endif
 
//fast
 
 
 ll i,n,j;
testcase{
	ll temp;
	cin>>n;
	vll height,cost;
	fr(i,0,n){
		cin>>temp;
		height.pb(temp);
	}

	fr(i,0,n){
		cin>>temp;
		cost.pb(temp);
	}

	cout<<binary_search(height,cost);
	cout<<khtm;
}



	return 0;
    
 
}