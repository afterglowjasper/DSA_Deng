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
//
//int findIndex(int S[], int c, int a)
//{
//	if (c%2 == 0)
//	{
//		if (a == S[c/2])
//        {
//            if ((a > S[c/2 - 1]) && (a < S[c/2 + 1]))
//                return c/2;
//            else if (a == S[c/2-1])
//                return c/2 - 1;
//            else
//                return c/2 + 1;
//        }
//		else if (a > S[c/2])
//		{
//			int *  T = S + c/2 + 1;
//			return findIndex(T, c/2, a) + c/2 + 1;
//		}
//		else
//		{
//			return findIndex(S, c/2, a);
//		}
//	}
//	else
//	{
//		if (a == S[(c-1)/2])
//			return (c-1)/2;
//		else if (a > S[(c-1)/2])
//		{
//            int * T = S + (c+1)/2;
//			return findIndex(T, (c+1)/2, a) + (c+1)/2;
//
//		}
//		else
//		{
//			return findIndex(S, (c-3)/2, a);
//		}
//	}
//}

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
	cout << "Please input:\n";
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
    bubbleSort(S, n);
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
		
// 1 3 5 7 7 9 12