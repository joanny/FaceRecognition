#include "employe.h"
#include "string"

Employe::Employe(){

}

Employe::Employe(string nom, string prenom, string lien_image){
    this->id = 123;
    this->nom = nom;
    this->prenom = prenom;
    this->lien_image = lien_image;
}

Employe::~Employe(){

}
