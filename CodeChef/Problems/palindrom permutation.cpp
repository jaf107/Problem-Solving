#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define ll long long


using namespace std;

char getChar(int i){
    return (char)(i+97);
}

void printPalindromicString(string s){

    map<char, vector<int> > indexesMap;
    for(int i=0; i<s.length(); i++){
        indexesMap[s[i]].pb(i);
    }

    int odd_freq_count = 0;
    for(int i=0; i<26; i++){

        if((indexesMap[ getChar(i) ].size() % 2 )!=0){
            odd_freq_count++;
        }
    }

    if(odd_freq_count > 1){
        cout << "-1";
        return;
    }

    int ans[s.length()];
    int startA = 0;
    int endA = s.length()-1;


    for(int i=0; i<26; i++){
        char currentChar = getChar(i);
        for(int j=0; j<indexesMap[currentChar].size() ;j+=2){

            if(( indexesMap[currentChar].size() -j ) == 1){
                ans[s.length()/2] = indexesMap[currentChar][j];
                continue;
            }
            ans[startA] = indexesMap[currentChar][j];
            ans[endA] = indexesMap[currentChar][j+1];
            startA++;
            endA--;
        }
    }

    for(int i=0; i<s.length(); i++){
        cout << ans[i] + 1 << " ";
    }
    return;

}

int main(){
    int tc;
    cin >> tc;

    while(tc--){

        string s;
        cin >> s;
        printPalindromicString(s);
        cout << endl;
    }

    return 0;
}
