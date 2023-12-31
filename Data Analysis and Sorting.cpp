#include <iostream>
using namespace std;


//2. Fonction pour trouver le nombre de personnes depassant une borne voulue
void compteur(float taille[], float poids[], int nbPers, float tailleVoulue, float poidsVoulu, int &nbTaille, int &nbPoids) {
    nbTaille = 0;
    nbPoids = 0;
    for(int i = 0; i < nbPers; i++) {
        if(taille[i] >= tailleVoulue) {
            nbTaille++;
        }
        if(poids[i] >= poidsVoulu) {
            nbPoids++;
        }
    }
}


// 3. Fonction pour trouver la taille minimale et le poids minimal
void Min(float taille[], float poids[], int tailleTableau, float &tailleMin, float &poidsMin) {
    tailleMin = taille[0];
    poidsMin = poids[0];
    for(int i = 1; i < tailleTableau; i++) {
        if(taille[i] < tailleMin) {
            tailleMin = taille[i];
        }
        if(poids[i] < poidsMin) {
            poidsMin = poids[i];
        }
    }
}


int main(int argc, const char * argv[]) {
    
    float taille[] = {1.72, 1.65, 1.58, 1.91, 1.69, 1.54, 1.83, 1.71};
    float poids[] = {65.3, 67.1, 74.8, 77.7, 72.3, 56.4, 74.9, 72.1};
    int nbPers = sizeof(taille)/sizeof(float);
    
    
    // 1. Affichage des deux tableaux (poids et taille)
    cout << "1. Affichage du contenu des deux tableaux\n\n";
    cout << "Taille |  Poids\n";
    cout << "------------------\n";
    for(int i = 0; i < nbPers; i++) {
        cout << taille[i] << "   |  " << poids[i] << "\n";
    }
    
    
    // 2. Affichage du nombre de personnes dont la taille depasse 1.73 metres et ou le nombre de personnes ou le poids depasse 70 kg
    cout << "\n\n2. Nombre de personnes dont :\n\n";
    int nbTaille, nbPoids;
    compteur(taille, poids, nbPers, 1.73, 70, nbTaille, nbPoids);
    cout << "a. La taille est superieure ou egale a 1.73 metre(s) : " << nbTaille << "\n";
    cout << "b. Le poids est superieur ou egal a 70 kg : " << nbPoids << "\n\n";
    
    
    // 3. Affichage pour calculer la taille et le poids minimal
    cout << "\n3. Affichage de :\n\n";
    float tailleMin, poidsMin;
    Min(taille, poids, nbPers, tailleMin, poidsMin);
    cout << "a. La taille minimale : " << tailleMin << " metre(s)\n";
    cout << "b. Le poids minimal : " << poidsMin << " kg\n\n";
    
    return 0;
}
