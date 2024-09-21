#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int k, N, i;
	double S;

	cout << "k = "; cin >> k;
	cout << "N = "; cin >> N;
	
	S = 0;
	i = k;
	while (i <= N)
	{
		S += (pow(sin(i), 2) + pow(cos(1.0 / i), 2)) / pow(i, 2);
		i++;
	}
	
	cout << exp(S) << endl;
	
	S = 0;
	i = k;
	do {
		S += (pow(sin(i), 2) + pow(cos(1.0 / i), 2)) / pow(i, 2);
		i++;
	} while (i <= N);
	
	cout << exp(S) << endl;;
	
	S = 0;
	for (i = k; i <= N; i++)
	{
		S += (pow(sin(i), 2) + pow(cos(1.0 / i), 2)) / pow(i, 2);
	}
	
	cout << exp(S) << endl;
	
	S = 0;
	for (i = N; i >= k; i--)
	{
		S += (pow(sin(i), 2) + pow(cos(1.0 / i), 2)) / pow(i, 2);
	}
	cout << exp(S) << endl;
	
	return 0;
}
