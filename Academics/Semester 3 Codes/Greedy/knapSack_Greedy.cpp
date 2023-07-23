#include<bits/stdc++.h>
using namespace std;
struct node
{
    int index;
    int benefit;
    int weight;
    int valuePerML;
};
void printAll(node sample[],int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(sample[i].index>sample[j].index)
            {
                swap(sample[i],sample[j]);
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        cout<<"Bottle "<<i+1<<": "<<sample[i].valuePerML<<" "<<sample[i].benefit<<" "<<sample[i].weight<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter number of bottles:";
    cin>>n;
    node bottles[n];
    cout<<endl;
    for(int i=0; i<n; i++)
    {

        bottles[i].index = i;
        cout<<"\nBottle "<<i+1<<": "<<endl;
        cout<<"---------"<<endl;
        cout<<"Weight :";
        cin>>bottles[i].weight;

        cout<<"Benefit :";
        cin>>bottles[i].benefit;
        bottles[i].valuePerML = (bottles[i].benefit/bottles[i].weight);

    }
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(bottles[i].valuePerML<bottles[j].valuePerML)
            {
                swap(bottles[i],bottles[j]);
            }
        }
    }
    cout<<"\n\n";
    int benefit=0,need;
    cout<<"\nHow much is needed? :";
    cin>>need;
    int i=0;
    //printAll(bottles,n);
    while(need!=0)
    {
        if(bottles[i].weight!=0)
        {
            if(need>bottles[i].weight)
            {

                need = need - bottles[i].weight;
                benefit += bottles[i].benefit;
                //cout<<"\nNeed is"<<need<<" \n";
                bottles[i].weight=0;
                i++;
            }
            else if(need < bottles[i].weight)
            {
                //cout<<"\nNeed is"<<need<<" \n";
                benefit += bottles[i].valuePerML;
                need--;
                bottles[i].weight--;

            }
            else
            {

            }

        }

    }

    cout<<"\nThe maximum Benefit can be "<<benefit<<endl;
    cout<<endl<<"Remaining :\n";
    printAll(bottles,n);
    return 0;
}
