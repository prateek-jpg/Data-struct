// Given an array A of size N containing 0s, 1s, and 2s; you need to sort the array in ascending order.

/*Input:
The first line contains an integer 'T' denoting the total number of test cases.
Then T testcases follow. Each testcases contains two lines of input. 
The first line denotes the size of the array N. The second lines contains the elements of the array A separated by spaces.
*/

#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	//code
	int x;
	cin>>x;
	while(x--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    for(int itm:a)
	        cout<<itm<<" ";
	        cout<<endl;
	}
	return 0;
}



/*Input :
2
5
0 2 1 2 0
3
0 1 0
*/

/*Output:
0 0 1 2 2
0 0 1
*/