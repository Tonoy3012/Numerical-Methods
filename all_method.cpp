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

void menu()
{
    cout << "All method list : " << nl;
    cout << "1.Bi-section" << nl;
    cout << "2.False-position" << nl;
    cout << "3.Newton-Raphson" << nl;
    cout << "4.Secant method" << nl;
    cout << nl;
}
void bi_section()
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


void false_position()
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


void newton_raphson()
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


void secant_method()
{
    int cs = 1;
    cout << "Enter two number : " << nl;
    double a , b;
    cin >> a >> b;
    
    cout << "Number of operation : " << nl;
    test()
    {
        double f1 = pow(a,2) - 4 * a - 10;
        double f2 = pow(b,2) - 4 * b - 10;

        double c = b - ((f2 * (b -a))/ (f2- f1));

        double f3 = pow(c,2) - 4 * c - 10;

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

        a =  b;
        b = c;
        
    }

}

int main()
{
    menu();

    cout << "Enter the number of your fvrt method : " << nl;
    int ch;
    cin >> ch;
    switch(ch)
    {
        case 1:
            bi_section();
            break;
        case 2:
            false_position();
            break;
        case 3:
            newton_raphson();
            break;
        case 4:
            secant_method();
            break;
        default :
            cout << "Sorry!Your choice can't found." << nl;

    }

    return 0;
}