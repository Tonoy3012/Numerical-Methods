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

#define f1(x,y,z)  (85-6*y+z)/27
#define f2(x,y,z)  (72-6*x-2*z)/15
#define f3(x,y,z)  (110-x+y)/54

int cs = 1;
void solve()
{
    double lim;
    cin >> lim;
    double x =0 ,y=0,z=0 , x1,y1,z1;

    double ck1 , ck2,ck3;

    do{
        x1 = f1(x , y, z);
        y1 = f2(x, y, z);
        z1 = f3(x , y, z);

        cout << "Case " << cs++ << ": " << x1 << " " << y1 << " " << z1 << nl;

        ck1=abs(x1 - x);
        ck2=abs(y1-y);
        ck3=abs(z1-z);

        x = x1;
        y=y1;
        z=z1;

    }while(ck1 > lim and ck2 > lim and ck3 > lim);

    cout << nl  <<  "Result :" << x1 << " " << y1 << " "<< z1 << nl;

}

int main()
{
    // ios::sync_with_stdio(0);
    // cin.tie(0);

    solve();

    return 0;
}