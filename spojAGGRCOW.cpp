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
 
 
/*Author-KUSHAGRA SINGH
Birla Institute of Technology
CS K18
*/
 
  ll i,j,n,c;


int func(int num,int array[])
{
    int cows=1,pos=array[0];
    fr(i,1,n)
    {
        if (array[i]-pos>=num)
        {
            pos=array[i];
            cows++;
            if (cows==c)
                return 1;
        }
    }
    return 0;
}

int binS(int array[])
{
    int l=0,r=array[n-1],max=-1;
    while (l<r)
    {
        //cout<<last<<" "<<ini<<endl;
        int mid=(l+r)/2;
        if (func(mid,array)==1)
        {
            //cout<<mid<<endl;
            if (mid>max)
                max=mid;
            l=mid+1;
        }
        else
            r=mid;
    }
    return max;
}


int main (){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin); 
freopen("output.txt", "w", stdout);
#endif

fast

 testcase{
   cin>>n>>c;
        int array[n];
        fr(i,0,n)
            cin>>array[i];
        sort(array,array+n);
       
        cout<<binS(array);
        cout<<khtm;
 }
return 0;
 
}