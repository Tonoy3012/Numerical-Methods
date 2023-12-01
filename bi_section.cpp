#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

#define nl '\n' 
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define mod 1000000007
#define pi 3.1415926535897932384626433832795
#define lpz(i, a, b) for (int i=a; i<b; i++)
#define lp(i, a, b) for (int i=a; i<=b; i++)
#define test() int t; cin>>t; while(t--)
#define ull unsigned long long


void solve()
{
    int cs = 1;
    cout << "Enter two number : " << nl;
    double x , y;
    cin >> x >> y;
    
    cout << "Number of operation : " << nl;
    test()
    {
        double z = (x + y)/2.0;
 
        double a = pow(x , 3) - 4 * x - 9;
        double b = pow(y , 3) - 4 * y - 9;
        double c = pow(z , 3) - 4 * z - 9;
 
        if(c == 0.00)
        {
            cout << fixed << setprecision(3) << "Case no " << cs++ << " : " << z << nl;
            cout << "Sorry more iteration is not possible." << nl;
            return;
        }
        else
        {
            cout << fixed << setprecision(3) << "Case no " << cs++ << " : " << z << nl;
            
        }
 
        if((c < 0 and b < 0) || (c >= 0 and b >= 0))
        {
            y = z;
            
        }
        else if((c < 0 and a < 0) || (c >= 0 and a >= 0))
        {
            x = z;
        }
        
    }
 
 
}

int main()
{
  
    solve();

    return 0;
}