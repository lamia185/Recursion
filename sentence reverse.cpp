#include<bits/stdc++.h>
#include<cstring>
using namespace std;

char ara[20][30];
int i=0,j=0;

void divide(char *ptr){
  if(*ptr=='\0')
  {
     ara[i][j]='\0';
    return;
}
  if(*ptr!=' '){
    ara[i][j]=*ptr;
    j++;
  }
  
  if(*ptr==' '){
    ara[i][j]='\0';
    i++;
    j=0;
  }
 divide(ptr+1);
  
}

int main(){
  char str[50],*ptr;
  cin.getline(str,50);
  ptr=str;
  divide(ptr);
  
  for(int k=i;k>=0;k--){
    puts(ara[k]);
  }
}

