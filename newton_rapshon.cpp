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

    //function
    //f(x) = 
    //f'(x) = 
    int cs = 1;
    double a = 0.00;
    cout << "Number of operation : " << nl;
    int n;
    cin >> n;
    while(n--)
    {
        double m = pow(a,2) - 4 * a - 7;
        double n = 2 * a - 4;
        double b = a - m/n;
        
        a = b;

        if(b == 0.0)
        {
            cout << fixed << setprecision(3) << "Case no " << cs++ << " : " << a << nl;
            cout << "Sorry more iteration is not possible." << nl;
            return;
        }
        else
        {
            cout << fixed << setprecision(3) << "Case no " << cs++ << " : " << a << nl;
        }
    }


}

int main()
{

    solve();

    return 0;
}