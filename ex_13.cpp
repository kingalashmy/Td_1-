#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// Q1. Comment simuler un lancer de dés en informatique ?
int throwDice() {
return rand() % 6 + 1; // Génère un nombre aléatoire entre 1 et 6 inclus
}
// Q3. Écrire une fonction playerTurn() qui correspond au tour d’un seul joueur.
int playerTurn(int player) {
cout << "Tour du joueur " << player << endl;
int choice;
// Q3.1. Afficher le message et récupérer le choix du joueur
do {
cout << "Voulez-vous lancer 1 ou 2 dés ? ";
cin >> choice;
if (cin.fail() || (choice != 1 && choice != 2)) {

cout << "Choix invalide. Veuillez entrer 1 ou 2." << endl;
}
} while (choice != 1 && choice != 2);
int scoreChange = 0;
int roll1 = throwDice();
if (choice == 2) {
int roll2 = throwDice();
cout << "Le joueur " << player << " a obtenu " << roll1 << " et " << 
roll2 << " sur ses dés." << endl;
// Q3.3. En fonction du résultat obtenu, renvoyer l'évolution du score
if (roll1 == roll2) {
cout << "Les dés sont identiques, le score du joueur " << player 
<< " diminue de " << (roll1 + roll2) << "." << endl;
scoreChange = -(roll1 + roll2);
}
else {
cout << "Le score du joueur " << player << " augmente de " << 
(roll1 + roll2) << "." << endl;
scoreChange = roll1 + roll2;
}
}
else {
cout << "Le joueur " << player << " a obtenu " << roll1 << " sur son dé." 
<< endl;
scoreChange = roll1;
}
return scoreChange;
}
int main() {
// Initialisation du générateur de nombres aléatoires
srand(time(0));
// Q4. Définir et initialiser les scores des joueurs
int score1 = 0;
int score2 = 0;
// Boucle de jeu
while (score1 < 30 && score2 < 30) {
// Tour du joueur 1
int scoreChange1 = playerTurn(1);
score1 += scoreChange1;
// Tour du joueur 2
int scoreChange2 = playerTurn(2);
score2 += scoreChange2;
// Affichage des scores
cout << "Score du joueur 1 : " << score1 << endl;
cout << "Score du joueur 2 : " << score2 << endl;
}
// Détermination du gagnant ou match nul
if (score1 >= 30 && score2 >= 30) {
cout << "Match nul ! Les deux joueurs ont dépassé 30 points." << endl;
}
else if (score1 >= 30) {
cout << "Le joueur 1 a gagné !" << endl;
}
else {
cout << "Le joueur 2 a gagné !" << endl;
}
return 0; 
}