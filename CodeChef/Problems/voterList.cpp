#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back

using namespace std;

vector<int> getVoters(int arr[], int n){
    sort(arr, arr+n);
    vector<int> voters;

    for(int i=0; i<n;){
        int countA = 0;
        int j = i;
        while(j<n && (arr[j] == arr[i])){
            countA++;
            j++;
        }
        if(countA >= 2){
            voters.pb(arr[i]);
        }
        i = j;
    }

    return voters;
}

int main(){
    int n1,n2,n3;
    cin >> n1 >> n2 >> n3;
    int total_elements = n2 + n3 + n1;

    int arr[total_elements];
    for(int i=0; i<total_elements; i++)
        cin >> arr[i];

    vector<int> voters = getVoters(arr, total_elements);

    cout <<  voters.size() << endl;
    for(int i=0; i< voters.size(); i++){
        cout << voters[i] << endl;
    }

    return 0;
}

