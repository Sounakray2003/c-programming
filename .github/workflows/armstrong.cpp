#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int reverse=0;
    int original=n;
    while(n>0){
        int lastdigit=n%10;
        reverse=(lastdigit*lastdigit*lastdigit)+reverse;
        n=n/10;

    }
    if(reverse==original){
        cout<<"armstrong number"<<endl;
    }
    else{
        cout<<"non armstrong"<<endl;

    }
    return 0;

}