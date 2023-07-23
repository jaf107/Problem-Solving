#include<bits/stdc++.h>
using namespace std;

struct Point
{
    int x,y;
};

Point p0;

Point nextToTop(stack<Point> &s)
{
    Point P = s.top();
    s.pop();
    Point result = s.top();
    s.push(P);
    return result;
}

void swap(Point &p1, Point &p2)
{
    Point temp = p1;
    p1 = p2;
    p2 = temp;
}

int distSq(Point p1, Point p2)
{
    return (p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y);
}

int Orientation(Point p, Point q, Point r)
{
    int d = ((q.y-p.y) * (r.x - q.x)) -
     ((q.x-p.x) * (r.y- q.y));

    if(d == 0)
        return 0;

    return (d > 0)? 1:2;
    // 1 for Clockwise
    // 2 for CounterClockwise
}

int compare(const void *vp1,const void *vp2)
{
    Point *p1 = (Point *) vp1;
    Point *p2 = (Point *) vp2;
    int O = Orientation(p0,*p1,*p2);

    if(O == 0)
        return (distSq(p0,*p2) >= distSq(p0, *p1))? -1:1;

    return( 0 == 2)? -1:1;

}

void printStack(stack<Point> &S)
{
    while(!S.empty())
    {
        Point p = S.top();
        printf("( %d , %d )\n", p.x,p.y);
        S.pop();
    }
}

void convexHull(Point points[], int n)
{
    int ymin = points[0].y, minV =0;
    for(int i=0; i<n;i++)
    {
        int y = points[i].y;
        int x = points[i].x;
        if((y<ymin) || (ymin == y && x < points[minV].x))
        {
            ymin = y;
            minV = i;
        }
    }

    swap(points[0],points[minV]);

    p0 = points[0];

    qsort(&points[1], n-1, sizeof(Point), compare);

    int m = 1;
    for(int i=1; i<n ;i++)
    {
        while(i < n-1 && Orientation(p0,points[i], points[i+1]) == 0)
            i++;

        points[m++] = points[i];
    }

    if(m<3)
        return;

    stack<Point> S;
    S.push(points[0]);
    S.push(points[1]);
    S.push(points[2]);

    for(int i = 3; i<m; i++)
    {
        while(Orientation(nextToTop(S), S.top(), points[i]) !=2)
            S.pop();
        S.push(points[i]);
    }

    printStack(S);

}

int main()
{
    int n;
    cin>>n;
    Point points[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d,%d",&points[i].x,&points[i].y);
    }
//    Point points[] = {{0, 3}, {1, 1}, {2, 2}, {4, 4},
//                      {0, 0}, {1, 2}, {3, 1}, {3, 3}};
//    int n = sizeof(points)/sizeof(points[0]);
    convexHull(points, n);
    return 0;
}

