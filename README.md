# 🚗 TP - Plus courts chemins & Problème des Hôtels

## 🎯 Objectifs pédagogiques

Ce travail pratique a pour but de manipuler deux concepts d’algorithmique avancée :

1. **Les plus courts chemins entre toutes paires de sommets** dans un graphe orienté via l’algorithme de Floyd-Warshall.
2. **L’optimisation d’un itinéraire avec pénalité**, modélisé comme un graphe orienté pondéré, et résolu par programmation dynamique (problème des hôtels proposé par Adrian Cambazard, UGA).

---

## 📌 Fonctionnalités à développer

### 🧮 1. `floydwarshall(A, D, n)`
Calcule les distances minimales entre **toutes les paires** de sommets dans un graphe.

- **Entrée** : matrice `A` représentant les distances initiales entre les sommets.
- **Sortie** : matrice `D` contenant les plus courts chemins calculés.

📐 Algorithme utilisé : **Floyd-Warshall**

---

### 🏨 2. `hotels(d, n)`
Optimise un trajet avec des arrêts dans des hôtels afin de **minimiser la somme des pénalités journalières**.

- **Principe** : on vise à parcourir 200 miles par jour.
- **Pénalité** :  
  \[
  (200 - x)^2
  \]
  où `x` est la distance parcourue ce jour-là.
- **Modélisation** : graphe orienté pondéré, chaque sommet représente un hôtel, chaque arc une étape de trajet avec pénalité comme poids.
- **Méthode** : programmation dynamique


## 🖼️ Illustration du problème

> Chaque borne rouge correspond à un hôtel. Le départ se fait à 0, et l’arrivée est obligatoire au dernier hôtel (500).  
> L’objectif est de choisir les arrêts intermédiaires pour **minimiser la pénalité totale**.

<img width="623" alt="Capture d’écran 2025-04-04 à 15 27 39" src="https://github.com/user-attachments/assets/adc3a621-dc91-42b7-b82a-d5d6ae8faabd" />


## 📂 Fichiers attendus

| Fichier         | Rôle                                               |
|------------------|-----------------------------------------------------|
| `main.cpp`       | Contient vos propres tests                          |
| `utilities.cpp`  | Implémentation des fonctions `floydwarshall` et `hotels` |
| `utilities.h`    | Prototypes des fonctions et définition de constantes |


## ⚙️ Compilation

```bash
g++ main.cpp utilities.cpp -o tp
./tp
