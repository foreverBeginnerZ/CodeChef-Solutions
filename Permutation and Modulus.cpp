
#include <iostream>
using namespace std;

int main() {

    //simple logic is that we are printing i+1 in i'th index,therefore Pi%i became 1
	// t is the number of test cases
	int t;
	cin >> t;

	// loop through each test case
	while (t--) {
	    // n is the length of the required permutation
	    int n;
	    cin >> n;

	    // loop through each number starting from 2 to n
	    for (int i = 2; i <= n; i++) {
	       cout << i << " "; // print each number followed by a space
	    }

	    // print 1 and a new line character to finish the sequence
	    cout << "1" << endl;
	}

	// return 0 to indicate successful execution
	return 0;
}
