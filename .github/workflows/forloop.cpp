#include<iostream>
using namespace std;
int main()
{
    int i;
    cin>>i;

    int sum=0;
    for(int counter=1;counter<=i;counter++)
    {
        sum=sum+counter;
    }
   cout<<sum<<endl;

   return 0;
}