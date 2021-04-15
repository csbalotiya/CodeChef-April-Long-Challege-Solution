#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void solve(){
    ll n,m,k;
    cin>>n>>m>>k;
    //ll ans  =0;
    //ll a[n+1][m+1] = {'\0'};
    double arr[n+1][m+1];
    for(ll i= 0 ;i <= n;i++ ){
        for(ll j = 0; j <= m;j++){
            if(i == 0|| j == 0)
                arr[i][j] = 0;
            else       
                cin>>arr[i][j];
        }
    }
    for(ll i = 0 ; i <= n ;i++){
        double prev = 0;
        for(ll j = 0; j <= m;j++){
            arr[i][j] += prev;
            prev = arr[i][j];
        }
     }
    for(ll i = 0 ; i <= m ;i++){
        double prev = 0;
        for(ll j = 0; j <= n;j++){
            arr[j][i] += prev;
            prev = arr[j][i];
        }
     }
    
    ll m_min = min(n,m);
    ll ans = 0;
    for(ll u = 1 ;u<= m_min ; u++){
         for(ll i = u ;i <= n;i++){
            for(ll j = u ;j <= m ;j++){
                if(( arr[i][j]-arr[i-u][j]-arr[i][j-u]+arr[i-u][j-u])/(u*u) >= k)
                    ans++;
            }
         }
    }
    cout<<ans<<"\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
