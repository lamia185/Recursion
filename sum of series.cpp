#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int sum=0;

void sumseries(int n,int x){
  if(n<1)
  return;
  
  sum+=pow(x,n);
  sumseries(n-1,x);
}

int main()
{
  int n,x;
  cin>>n>>x;
  sumseries(n,x);
  cout<<sum<<endl;
  
}
