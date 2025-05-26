#include<iostream>
using namespace std;
int fact(int);
int main(){
    int n,k;
    cout<<"Enter a no\n";
    cin>>n;
    k=fact(n);
    cout<<"factorial:"<<k<<endl;
    return 0;
} 
int fact(int n)
{
    if(n==0)
    return 1;
    else
       return(n*fact(n-1));
}