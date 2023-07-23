
#include<bits/stdc++.h>
using namespace std;
struct Point
{
    int x;
    int y;
};

bool onSegment(Point M, Point N, Point O)
{
    if(N.x <= max(M.x, O.x) && N.x >= min(M.x, O.x)
       && N.y<= max(M.y, O.y) && N.y >= min(M.y, O.y))
        return true;

    return false;

}

int orientation(Point M, Point N, Point O)
{
    double d = 0;

    d = ((N.y-M.y)*(O.x-N.x)) - ((N.x-M.x)*(O.y-N.y));

//    cout<<d<<" ";
    if(d == 0)
        return 0;
    else if(d>0)
        return 2;
    else return 1;
}
bool intersect(Point A,Point B,Point C,Point D)
{
    int Orientation1 = orientation(A,C,B);
    int Orientation2 = orientation(A,D,B);
    int Orientation3 = orientation(C,A,D);
    int Orientation4 = orientation(C,B,D);
//
//    cout<<Orientation1<<endl;
//    cout<<Orientation2<<endl;
//    cout<<Orientation3<<endl;
//    cout<<Orientation4<<endl;

    if(Orientation1 != Orientation2 && Orientation3 != Orientation4)
        return true;

    if(Orientation1 == 0 && onSegment(A,C,B))
        return true;
    if(Orientation2 == 0 && onSegment(A,D,B))
        return true;
    if(Orientation3 == 0 && onSegment(C,A,D))
        return true;
    if(Orientation4 == 0 && onSegment(C,B,D))
        return true;

    return false;


}
int main()
{
    Point A,B,C,D;

    cin>>A.x>>A.y;
    cin>>B.x>>B.y;
    cin>>C.x>>C.y;
    cin>>D.x>>D.y;

    if(intersect(A,B,C,D))
    {
        cout<<"Line Segments intersect! ";
    }
    else
        cout<<"Line Segments don't intersect! ";
}
