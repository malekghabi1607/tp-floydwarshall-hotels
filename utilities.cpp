
#include <iostream>
#include <fstream>
#include "utilities.h"
#include <climits> // pour INT_MAX
using namespace std;

/****************************************/
/* Objectif : Calcul des plus court chemins entre 
toutes les paires de sommets
*****************************************
- A : Matrice des distances
- D : Matrice des plus courts chemins
- n : nombre de sommets
/****************************************/
void floydwarshall(int A[][N], int D[][N], int n)
{
	// Initialiser D avec les valeurs de A
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			D[i][j] = A[i][j];

	// Triple boucle de Floyd-Warshall
	for (int k = 0; k < n; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				// On vérifie si un chemin plus court passe par k
				if (D[i][k] + D[k][j] < D[i][j]) {
					D[i][j] = D[i][k] + D[k][j];
				}
			}
		}
	}
}


/****************************************/
/* Objectif : Calcul de la valeur optimale du problèmes
des hotels
*****************************************
- d : tableau des distances à l'origine
- n : nombre d'hotels
/****************************************/



int hotels(int d[], int n)
{
	int f[N];
	f[0] = 0; // pénalité nulle au départ (mile 0)

	for (int i = 1; i <= n; i++) {
		f[i] = INT_MAX;
		for (int j = 0; j < i; j++) {
			int distance = d[i] - d[j];
			int penalty = (200 - distance) * (200 - distance);
			int total = f[j] + penalty;
			if (total < f[i])
				f[i] = total;
		}
	}
	return f[n];
}
