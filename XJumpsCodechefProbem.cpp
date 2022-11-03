#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int m,n;
	    cin>>m>>n;
	    
	    if(m<n)
	        cout<<m<<endl;
	    else
	        cout<<(m/n)+(m%n)<<endl;
	}
	return 0;
}
