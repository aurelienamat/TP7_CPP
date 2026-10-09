#include "pile_entier.h"

using namespace std;

pile_entier::pile_entier(int taille): taille(20), hauteur(0){
	pile = new int[taille];
}

void pile_entier::empile(int element) {
	if (!this->pleine()) {
		this->pile[hauteur] = element;
		this->hauteur += 1;
	}
}

int pile_entier::depile() {
	if (!this->vide()) {
		this->taille -= 1;
		this->hauteur -= 1;
		return this->pile[hauteur];
	}
	//Quoi retourner si erreur
}

int pile_entier::pleine() {
	if (this->hauteur > this->taille) {
		return 1;
	}
	else {
		return 0;
	}
}

int pile_entier::vide() {
	if (this->taille == 0) {
		return 0;
	}
	else {
		return 1;
	}
}

pile_entier::~pile_entier() {
	delete pile;
}
