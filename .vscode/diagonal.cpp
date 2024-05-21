#include<iostream>
using namespace std;
int main(){
    	// swap elements of diagonal
	for (int i = 0; i < N; ++i)
	if (i != N / 2)
	swap(array[i][i], array[i][N - i - 1]);

	for (int i = 0; i < N; ++i)
	{
	for (int j = 0; j < N; ++j)
			cout<<" "<< array[i][j];
	cout<<endl;
	}
}

// Driver Code
int main()
{
	int array[N][N] = {4, 5, 6,
					1, 2, 3,
					7, 8, 9};
	interchangeDiagonals(array);
	return 0;
}

// This code is contributed by noob2000.
}