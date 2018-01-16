#include<bits/stdc++.h>
using namespace std;

int flag=0;

void length(char *ptr){
  if(*ptr=='\0')
  return;

   flag++;
   length(ptr+1);
  
  
}

int main()
{
  char str[30],*ptr;
  cin>>str;
  ptr=str;
  length(ptr);
  cout<<flag<<endl;
}
  
  
