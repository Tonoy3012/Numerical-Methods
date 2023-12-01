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

#define f1(x,y,z)  (7+y)/2
#define f2(x,y,z)  (1+x+z)/2
#define f3(x,y,z)  (1+y)/2

int cs = 1;
void solve()
{
    double lim;
    cin >> lim;
    double x =0 ,y=0,z=0 , x1,y1,z1;

    double ck1 , ck2,ck3;

    do{
        x1 = f1(x , y, z);
        x = x1;
        y1 = f2(x, y, z);
        y=y1;
        z1 = f3(x , y, z);
        z=z1;

        cout << "Case " << cs++ << ": " << x << " " << y << " " << z << nl;

        ck1=abs(x-x1);
        ck2=abs(y-y1);
        ck3=abs(z-z1);    

    }while(ck1 > lim and ck2 > lim and ck3 > lim);

    cout << nl  <<  "Result :" << x << " " << y << " "<< z << nl;

}

int main()
{
    // ios::sync_with_stdio(0);
    // cin.tie(0);

    solve();

    return 0;
}