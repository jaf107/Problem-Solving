

#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(int i=a; a < b; i++)
typedef long long ll;
using namespace std;
void solve(int i);
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

//#ifndef ONLINE_JUDGE
//    freopen("input.txt", "r", stdin);
//    freopen("error.txt", "w", stderr);
//    freopen("output.txt", "w", stdout);
//#endif

    ll t=1;
//    $ {2:/*is Single Test case?*/}
     cin>>t;
    for(int i = 1; i <= t; i++)
    {

        solve(i);
//        cout<<"\n";
    }

//    cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
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

int lowerBound(vector<int> input, int key){
    int ans = 0;

    int begArr = 0, endArr = input.size()-1;
    int mid = (begArr + endArr) /2;
    int index = -1;
    while(begArr <= endArr)
    {
         mid = (begArr + endArr) /2;
        if(input[mid] == key){
            index = mid;
            endArr = mid-1;
        }else if(input[mid] < key){
            begArr = mid + 1;
        }else {
            endArr = mid-1;
        }
    }
    return begArr;
}

int pointsInSegment(vector<int> &input, int left,int right)
{

    int upper = upper_bound(input.begin(), input.end(), right) - input.begin();
    int lower = lower_bound(input.begin(), input.end(), left) - input.begin();

    return upper - lower;
}

void solve(int i)
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    vector<int> ans(q);
    for(auto &x: a){
        cin >> x;
    }

    cout << "Case " <<i <<":\n";
    for(int i = 0; i < q; i++){
        int left, right;
        cin >> left >> right;

//        cout << "\nPoints in Segment:" << pointsInSegment(a,left,right);;

        ans[i] = pointsInSegment(a,left,right);
//        cout << endl;
    }

    for(auto x: ans)
    {
        cout << x << endl;
    }
//    cout << endl;


}
