/**

Enormous Input Test  |  Problem Code: INTEST

The purpose of this problem is to verify whether the method you are using to read input data is sufficiently fast to handle problems branded with the enormous Input/Output warning.
You are expected to be able to process at least 2.5MB of input data per second at runtime.

Input
The input begins with two positive integers n k (n, k<=107). The next n lines of input contain one positive integer ti, not greater than 109, each.

Output
Write a single integer to output, denoting how many integers ti are divisible by k.

Example
Input:
7 3
1
51
966369
7
9
999996
11

Output:
4
*/


// Note that this problem is for testing fast input-output.
#include <stdio.h>


int main()
{
	// Read the input n, k
	int n, k;
	scanf("%d %d", &n, &k);

	// ans denotes number of integers n divisible by k
	int ans = 0;

	for (int i = 0; i < n; i++)
     {
		int t;
		scanf("%d", &t);

		if (t % k == 0)
		{
			ans++;
		}
	}

	// Print the ans.
	printf("%d\n", ans);

	return 0;
}

