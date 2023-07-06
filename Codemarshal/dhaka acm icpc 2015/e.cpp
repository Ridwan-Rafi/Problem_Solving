// C++ program for
// the above approach
#include<bits/stdc++.h>
using namespace std;


// Functions returns sum
// of numbers from 1 to n
long long linearSum(long long n)
{
	return (n * (n + 1) / 2) ;
}

long long rangeSum(long long b, long long a)
{
	return (linearSum(b) -
			linearSum(a));
}


long long totalSum(long long n)
{

	long long result = 0;
	long long i = 1;

	while(true)
	{

		result += rangeSum(n / i, n / (i + 1)) *
						(i );


		if (i == n)
			break;

		i = n / (n / (i + 1));
	}
	return result;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	long long N;

	while(cin>>N&&N!=0)
	cout << totalSum(N)-1 << endl;

	return 0;
}

// This code is contributed by rutvik_56
