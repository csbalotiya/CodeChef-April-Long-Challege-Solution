#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    int T , Q , D;
    cin>>T>>Q>>D;
    while(T--)
    {
        ll x = -2e18 ;
        ll r = 2e18;
        ll y1 = x;
        ll y2 = r;
        ll current = 1LL;
        string cc;
        ll mid = (x + r) / 2;
        while(x <= r)
        {
            mid = (x + r)/2;
            if(current == 1LL)
            {
                cout<<current<<" "<<mid<<" "<<y1<<"\n";
            }
            else
            {
                cout<<current<<" "<<mid<<" "<<y1<<" "<<mid<<" "<<y2<<"\n";
            }
            cin>>cc;
            if(cc[0] == 'X')
            {
                current = 2LL;
            }
            if(cc == "O")
            {
                break;
            }
            if(cc[0] == 'N')
            {
                x = mid + 1LL;
            }
            if(cc[0] == 'P')
            {
                r = mid-1LL;
            }
        }
        
    }
	
	return 0;
}
