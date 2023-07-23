
#include<bits/stdc++.h>
using namespace std;
int arr[100001];
int st[4*100001];

// si = segment index
// ss = segment start
// se = segment end

// qs = query start
// qe = query end




void buildTree(int si, int ss, int se)
{
    if(ss == se)
    {
        st[si] = arr[ss];
        return;
    }

    int mid = (ss + se)/2;

    buildTree(2*si, ss, mid);
    buildTree(2*si + 1, mid + 1, se);
    st[si] = min(st[2*si], st[2*si + 1]);
}

int query(int si, int ss, int se, int qs, int qe)
{
    if(qs > se || qe <ss)
        return INT_MAX;
    if(ss >= qs && se <= qe)
        return st[si];

    int mid = (ss + se )/ 2;

    int l = query(2*si, ss , mid, qs, qe);
    int r = query(2*si+1, mid+1, se, qs, qe);

    return min(l,r);
}


// qi = query index


void update(int si, int ss, int se, int qi)
{
    if(ss == se)
    {
        st[si] = arr[ss];
        return;
    }


    int mid = (se+ss)/2;

    if(qi <= mid){
        update(2* si, ss, mid, qi);
    }else{
        update(2*si + 1, mid + 1, se, qi);
    }

    st[si] = min(st[2*i], st[2*i + 1]);
}





int main()
{
    int n, q , l, r;

    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> arr[i];

    buildTree(1,1,n);
    cin >>q;
    while(q--){
        cin >> l >> r;
        cout << query(1,1,n,l+1,r+1) <<endl;
    }

       return 0;
}
