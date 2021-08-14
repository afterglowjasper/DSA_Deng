#include <iostream>
using namespace std;

void bubbleSort(int S[], int n)
{
	bool sorted = false;
	while ( !sorted )
	{
		sorted = true;
		for ( int i = 1; i < n; i++)
		{
			if (S[i-1] > S[i])
			{
				swap(S[i-1], S[i]);
				sorted = false;
			}
		}
		n--; 
	}
}

int findT(int S[], int n, int a, int b)
{
    int counter = 0;
    for(int i = 0; i < n; i++)
    {
        if ((S[i] >= a) &&  (S[i] <= b))
            counter ++;
    }
    return counter;
}

int main()
{
	int n;
	int m;
	cin >> n >> m;
	int S[n];
	for(int i = 0; i < n; i++)
	{
		cin >> S[i];
	}
	int output[m];
	int a[m], b[m];
    // bubbleSort(S, n);
    int counter;
	for(int i = 0; i < m; i++)
	{
		cin >> a[i] >> b[i];
	    counter =  findT(S, n, a[i], b[i]);
		output[i] = counter; 
	}
	for(int i = 0; i < m; i++)
	{
		cout << output[i] << "\n";
    }
}