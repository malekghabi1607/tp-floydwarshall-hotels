
#include <iostream>
#include "utilities.h"

using namespace std;

int main() {
	const int INF = 9999;
	int A[N][N] = {
		{0,   3,   INF, 7},
		{8,   0,   2,   INF},
		{5,   INF, 0,   1},
		{2,   INF, INF, 0}
	};
	int D[N][N];
	int n = 4;

	floydwarshall(A, D, n);

	cout << "Matrice des plus courts chemins :" << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (D[i][j] == INF)
				cout << "INF\t";
			else
				cout << D[i][j] << "\t";
		}
		cout << endl;
	}
}
