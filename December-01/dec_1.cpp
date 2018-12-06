#include<iostream.h>
#include<ctime>
using namespace std;

void binary(int n,int l,int r,int mid)
{
    mid=(l+r)/2;
    cout<<"\n Guessing "<<mid;
    if(mid==n)
    {
        cout<<"\n Right!!"<<"\n\n";
        return;
    }
    else if(mid<n)
    {
        cout<<"\n Too low";
        cin.ignore();
        return binary(n,mid,r,0);
    }
    else
    {
        cout<<"\n Too high";
        cin.ignore();
        return binary(n,l,mid,0);
    }
}

int main()
{
    srand(time(NULL));
    int n=rand()%100;
    cout<<"\n------ Guessing the random generated number ------\n";
    binary(n,0,100,0);
    return 0;
}

