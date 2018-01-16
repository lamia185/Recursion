#include<bits/stdc++.h>
using namespace std;

int sum=0;

int sumprint(int n){
  
  if(n<1)
  return 0;
  
    sum+=n;
    sumprint(n-1);
    
return sum;

}

int main()
{
  int n;
  cin>>n;
  int s=sumprint(n);
  cout<<s<<endl;
	
}
