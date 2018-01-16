#include<bits/stdc++.h>
using namespace std;

void intprint(int n){
	if(n<1)
		return;
			
       cout<<n<<endl;
	    intprint(n-1);	
}

int main()
{
	int n,i;
	cin>>n;
	intprint(n);
	return 0;

}
