#include<bits/stdc++.h>
using namespace std;

double mysqrt(double n)
{
    double low = 0.0;
    double high = n;

    double mid = low + ((high-low)/2);
    while ((high - low > .0001) )
    {
        mid = low + ((high-low)/2);
        cout << low << " " << mid<< " " << high <<  endl;
        if (mid* mid > n)
        {
            high = mid;
        }else{
            low = mid;
        }
//        counter++;
    }

    return mid;
}

int main()
{
    double n;
    cin >> n;

    cout << mysqrt(n);
}
