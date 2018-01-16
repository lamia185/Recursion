#include<bits/stdc++.h>
using namespace std;

int k;
void series(int n){
  if(n<1){
    cout<<"1+";
    return;
  }
  
  series(n-1);
  if(n!=k)
  printf("X%d+",n);
  else 
  printf("X%d",n);
}

int main(){
  int n;
  cin>>n;
   k=n;
  series(n);
  
}
