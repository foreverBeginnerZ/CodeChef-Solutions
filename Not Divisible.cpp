
#include <iostream>
using namespace std;

int main() {
	/* logic: we are jusy going to print 0's and 1's .
	0+1=1 is not divisible by 2 [when difference between i and j is 1]
	if we take pairs such as i=2 j=4
        1) 0+1+0=1 not divisibe by 3
        2)1+0+1=2 not divisible by 3
        ..
        also the sum of the array is less then (j-i+1) so that will not be divisible by (j-i+1)
        */
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    for(int i=0;i<n;i++)
	    {
	        if(i%2==0) cout<<"1"<<" ";
	        else cout<<"0"<<" ";
	    }

	    cout<<endl;
	}
	return 0;
}
