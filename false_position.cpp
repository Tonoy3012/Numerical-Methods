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
    double a , b;
    cin >> a >> b;
    
    cout << "Number of operation : " << nl;
    test()
    {
        double f1 = pow(a,3) + 4 * pow(a , 2) - 10;
        double f2 = pow(b,3)  + 4 * pow(b , 2) - 10;

        double c = a - ((f1 * (b -a))/ (f2- f1));

        double f3 = pow(c,3) + 4 * pow(c , 2) - 10;

        if(f3 == 0.00)
        {
            cout << fixed << setprecision(3) << "Case no " << cs++ << " : " <<  c << nl;
            cout << "Sorry more iteration is not possible." << nl;
            return;
        }
        else
        {
            cout << fixed << setprecision(3) << "Case no " << cs++ << " : " << c << nl;
        }

        if((f1 >= 0 and f2 < 0) or (f1 < 0 and f2 >= 0))
        {
            if((f1 < 0 and f3 < 0) or (f1 >= 0 and f3 >= 0))
            {
                a = c;
            }
            else
            {
                b = c;
            }
        }
        
    }

}

int main()
{
    solve();

    return 0;
}