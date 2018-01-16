#include<bits/stdc++.h>
#include<cstring>
using namespace std;

void instead(char *ptr){
  if(*ptr=='\0')
  return;
  
  if(*ptr=='a'){
    *ptr='*';
  }
  cout<<*ptr;
  instead(ptr+1);
}

int main()
{
  char str[30],*ptr;
  cin>>str;
  ptr=str;
  instead(ptr);

}
  
