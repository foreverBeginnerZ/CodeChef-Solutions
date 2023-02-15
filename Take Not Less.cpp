#include <iostream>
#include <algortithm>
/*If there is atleast one odd cccurence then M will win else Z*/

using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;

	    int ara[n];
	    for(int i=0;i<n;i++)
        {
            cin>>ara[i];
        } //end of array input

        sort(ara,ara+n); //sorting the array


        int counter=1,flag=0; //flag =0 means all are even

        if(n==1) cout<<"Marichka"<<endl;

        else
        {

          for(int i=0;i<n-1;i++)
          {
            if(ara[i]==ara[i+1]) counter++;

            else
            {
                if(counter%2!=0) { flag=1; break; } //flag odd means M wins
                else
                {
                    counter=1;
                }
            }
          }

          if(flag==0) cout<<"Zenyk"<<endl;
          else cout<<"Marichka"<<endl;

        }

	} //end of test cases
	return 0;
}

