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
#define mod 998244353
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define testcase int T; cin>>T; while(T--)
 
 
/*  Author-KUSHAGRA SINGH
Birla Institute of Technology
CSE K18  */



/* RK is a great code breaker. 
He knows any cipher in the world can be broken by frequency analysis. 
He intercepted an enemy message.
The message consists of N numbers, smaller than or equal to C.
RK belives freqency analysis consists of sorting this sequence so that more 
frequent numbers appear before less frequent ones.

Formally, the sequence must be sorted so that given any two numbers X and Y ,
X appears before Y if the number of times X appears in the original sequence 
is larger than the number of time Y does. 
If the number of appearances is equal, the number whoes value appears sooner 
in the input should appear sooner in the sorted sequence.
Help RK by creating a "frequency sorter".  */
 
map<int,int> f;
map<int,int> priority;
int a[1005];

  ll i,j,n,m,k;

int comp(int x,int y)
{
    if(f[x] == f[y]) {
        return(priority[x] < priority[y]);
    } 

    return(f[x] > f[y]);
}


int main (){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin); 
freopen("output.txt", "w", stdout);
#endif

fast


int c;

    cin>>n>>c;
 fr(i,0,n){
    cin>>a[i];
        f[a[i]]++;
 }


    for(i = n - 1; i >= 0; i--) {
        priority[a[i]] = i;
    }

   sort(a,a+n,comp);

   fr(i,0,n)
   cout<<a[i]<<' ';   

    printf("\n");

    return 0;
 
}