#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<fixed<<setprecision(4);

    double x1,y1,x2,y2,dist=0;

    cin>>x1>>y1>>x2>>y2;

    dist = sqrt(pow((x2-x1),2)+pow((y2-y1),2));

    cout<<dist<<endl;
    return 0;
}