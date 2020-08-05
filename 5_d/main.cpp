#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
const int n=3;

pair<int, int> bot(int mas[n+1][n+1], long long x)
{
    pair<int, int>l;
    int p, k;
    k=rand()%3 +1;
    p=rand()%3 +1;
    while(mas[k][p]!=0)
    {
      k=rand()%3+1;
      p=rand()%3+1;
    }
    l.first=k;
    l.second=p;
     return l;
}

bool check(int mas[n+1][n+1])
{
for(int i=1; i<=n; i++)
       {

            if(mas[i][1]==1 and mas[i][2]==1 and mas[i][3]==1)
            {
                cout<<"x wins";
                return true;

            }
        }

        for(int i=1; i<=n; i++)
        {


            if(mas[1][i]==1 and mas[2][i]==1 and mas[3][i]==1)
            {
                cout<<"x wins";
                return true;

            }
        }

        if(mas[1][3]==1 and mas[2][2]==1 and mas[3][1]==1)
        {
            cout<<"x wins";
            return true;

        }
        if(mas[3][3]==1 and mas[2][2]==1 and mas[1][1]==1)
        {
            cout<<"x wins";
            return true;

        }




        for(int i=1; i<=n; i++)
        {


            if(mas[i][1]==2 and mas[i][2]==2 and mas[i][3]==2)
            {
                cout<<"O wins";
                return true;

            }
        }
        for(int i=1; i<=n; i++)
        {

            if(mas[1][i]==2 and mas[2][i]==2 and mas[3][i]==2)
            {
                cout<<"O wins";
                return true;

            }
        }


        if(mas[3][3]==2 and mas[2][2]==2 and mas[1][1]==2)
        {
            cout<<"O wins";
            return true;
        }
        if(mas[1][3]==2 and mas[2][2]==2 and mas[1][3]==2)
        {
            cout<<"O wins";
            return true;

        }
        if(mas[1][1]!=0 and mas[1][2]!=0 and mas[1][3]!=0 and mas[2][1]!=0 and mas[2][2]!=0 and mas[2][3]!=0 and mas[3][1]!=0 and mas[3][2]!=0 and mas[3][3]!=0)
        {
            cout<<"draw";
            return true;

        }
}
long long a[100];
int mas [n+1][n+1];
int main()
{
    bool f=false;
    pair<int, int>m;
    long long  k_1, l_1, k_0, l_0, x=1, pb, pb_2;
    cin>>pb>>pb_2;


    while(!check(mas))
    {
        if(pb==1 && pb_2==1)
        {
           m=bot(mas,x);
        }

        if(pb==1 && pb_2==0)
        {
            cin>>l_1;
            m=bot(mas,x);
        }

        if(pb==0 && pb_2==0)
        {
           cin>>k_1>>l_1;
        }

        if(pb==0 && pb_2==1)
        {
           cin>>k_1;
           m=bot(mas,x);
        }
        mas[k_1][l_1]=x;
        if(x==1)
        {
            x=2;
        }
        else
        {
            x=1;
        }
    }
    return 0;
}
