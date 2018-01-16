#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int c;

void series(int n){
  if(n<1)
  return;

  series(n-1);
  c=pow(n,n);
  cout<<c<<endl;
}

int main()
{
  int n;
  cin>>n;
  series(n);
}
  
