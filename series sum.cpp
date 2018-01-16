#include<bits/stdc++.h>
using namespace std;

int sum=0,s;

void sumseries(int n,int m){
  if(n<1)
  return;
  
  int s=n*(m-(n-1));
  sum+=s;
  sumseries(n-1,m);
}

int main()
{
  int n,x,k;
  cin>>n;
  k=n;
  sumseries(n,k);
  cout<<sum<<endl;
  
}
