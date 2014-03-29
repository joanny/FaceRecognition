#include "employe.h"
#include "string"
#include <cstdlib>
#include <iostream>
using namespace std;
Employe::Employe(){

}

Employe::Employe(int id, string nom, string prenom, string lien_image){
    this->id = id;
    this->nom = nom;
    this->prenom = prenom;
    this->lien_image = lien_image;
}
int Employe::getId(){
    return this->id;
}


void Employe::setNom(string nom){
    this->nom = nom;
}

void Employe::setPrenom(string prenom){
    this->prenom = prenom;
}

void Employe::setLien_image(string lien_image){
    this->lien_image =  lien_image;
}

string Employe::getNom(){
    return this->nom;
}

string Employe::getPrenom(){
    return this->prenom;
}

string Employe::getLien_Image(){
    return this->lien_image;
}


string Employe::toString(){
    cout<<id;
    return
           " Nom : " + this->getNom() +
            " Prenom :"+ this->getPrenom()  +
            " lien image " + this->getLien_Image();
}
void Employe::setId(int id){
    this->id= id;
}

Employe::~Employe(){

}
