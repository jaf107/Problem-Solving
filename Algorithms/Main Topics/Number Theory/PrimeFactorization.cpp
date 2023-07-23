#include<bits/stdc++.h>
using namespace std;
vector<int> factors;
vector<int> prime;
void createPrimeList(int n)
{

    for(int i = 2 ; i<= n ; i++)
    {
        int sqrtI = sqrt(i);
        bool caseP = true;
        for(int j = 2 ; j <= sqrtI ; j++)
        {
            if(i % j == 0)
                caseP = false;
        }
        if(caseP)
            prime.push_back(i);
    }
}
void factorize(int n)
{
    int sqrtn = sqrt(n);
    for(int i = 0 ; i< prime.size() && prime[i] <= sqrtn ; i++)
    {
        if(n % prime[i] == 0)
        {
            while(n % prime[i] == 0)
            {
                n /= prime[i];
                factors.push_back(prime[i]);
            }
            sqrtn = sqrt(n);
        }
    }
    if( n != 1)
        factors.push_back(n);


}
int main()
{
    int n = 500;
    createPrimeList(n);
    factorize(n);

    for(vector<int>::iterator it= factors.begin() ; it != factors.end(); it++)
        cout<<*it<<" ";

}
