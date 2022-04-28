#include <iostream>
using namespace std;

#define min(a,b) (((a) < (b)) ? (a) : (b))

// 5618.°ø¾à¼ö
int a, b, c;

int main()
{
    int n;
    cin >> n;

    if (n == 2)
    {
        cin >> a >> b;
    }
    else
    {
        cin >> a >> b >> c;
    }

    int min = 0;

    if (a < b) min = a;
    else min = b;
    
    for (int i = 1; i <= min; i++)
    {
        if (a % i == 0 && b % i == 0 && c%i==0) cout << i<<'\n';
    }
    
}

