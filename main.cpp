#include <iostream>

using namespace std;
int mas[16];

int f(int m, int k)
{
   int a, b;

   if(m>=8)
   {
       return(mas[m]);
   }

   if(k==1)
   {
      a=f(2*m,2);
      b=f(2*m+1,2);
      return min(a,b);
   }

   if (k==2)
   {
      a=f(2*m,1);
      b=f(2*m+1,1);
      return max(a,b);
   }
}


int main()
{


    for(int i=8; i<=15; i++)
    {
        cin>>mas[i];
    }

    cout<<f(1, 1);
    return 0;
}
