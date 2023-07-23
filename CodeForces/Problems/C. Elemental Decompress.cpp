
#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(ll i=a; a < b; i++)
typedef long long ll;
using namespace std;
void solve();
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

//#ifndef ONLINE_JUDGE
//    freopen("input.txt", "r", stdin);
//    freopen("error.txt", "w", stderr);
//    freopen("output.txt", "w", stdout);
//#endif


    ll t=1; /// If there is no multiquery
    cin>>t; /// then comment this


    while(t--)
    {

        solve();
//        cout<<"\n";

    }

    return 0;
}

void printVector(vector<ll> a, string name)
{
    cout << name << " : ";
    for(auto x: a)
    {
        cout << x << " ";
    }
    cout << endl;
}

void solve()
{
    /// Input the number of element
    ll n;
    cin >> n;


    /// Input the array a[1...n]
    vector<ll> a(n+1);
    for(int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }

    /// Storing position of each a[i]
    vector< vector<ll> > b(n+1);
    for(int i = 1; i <= n; ++i)
    {
        b[a[i]].PB(i);

        if(b[a[i]].size() >= 3 )
        {
            cout << "No\n";
            return;
        }
    }


    /// Initialize permutation p[1...n], q[1...n]
    vector<ll > p(n + 1, -1), q(n + 1, -1);

    /// Initialize permutation position, fp[p[i]] = i, fq[q[i]] = i
    vector<ll> fp(n + 1, -1), fq(n+1, -1);

    for(ll x = n; x >= 1; --x)
    {
        for(ll i: b[x])
        {
            if(fp[x] == -1)
            {
                fp[x] = i;
                p[i] = x;
//                p[fp[x] = i] = x;
            }
            else if (fq[x] == -1)
            {
                fq[x] = i;
                q[i] = x;
//                q[fq[x] = i] = x;
            }
        }
    }
//
//    printVector(p,"P  ");
//    printVector(fp,"FP ");
//    printVector(q,"Q  ");
//    printVector(fq,"FQ ");


    for(ll x = n, vp = n,vq = n;  x >= 1; --x)
    {
        for(ll i: b[x])
        {
            while( fp[vp] != -1 )
                --vp;
            while( fq[vq] != -1)
                --vq;

//            printf("\n For X = %d , Vp = %d , Vq = %d ", x, vp,vq);

            if( p[i] == -1 && vp > 0 )
            {
                fp[vp] = i;
                p[i] = vp;
//                printf("\n  Putting p[%d]= %d",i, vp);
//                p[fp[vp] = i] = vp;
            }

            if ( q[i] == -1 && vq > 0)
            {
                fq[vq] = i;
                q[i] = vq;
//                printf("\n  Putting q[%d]= %d", i, vq);
//                q[fq[vq] = i] = vq;
            }
        }
    }
//    cout << endl;
//    printVector(p,"P ");
//    printVector(fp,"FP ");
//    printVector(q,"Q ");
//    printVector(fq,"FQ ");

//    printVector(p, "P");
//    printVector(q, "Q");
    for(ll i = 1; i <= n; ++i)
    {
        if(max(p[i], q[i]) != a[i])
        {
//            cout <<"P -> "  << p[i] << " \nQ ->" << q[i] << " \nA ->" << a[i] << "\n";
             /// Statement condition is not satisfied
            cout << "No\n";
            return;
        }
    }

    cout << "Yes\n";

    for(ll i = 1; i <= n; i++)
        cout << p[i] << " ";
    cout << "\n";

    for(ll i = 1; i <= n; i++)
        cout << q[i] << " ";
    cout << "\n";
    return;


}

/*

1
5
5 3 4 2 5


*/

