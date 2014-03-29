#include"service.h"
#include "employe.h"
#include <iostream>
#include <cstdlib>
using namespace std;
Service::Service()
{

}
Service::Service(string libelle_service)
{
    this->id_service = 123;
    this->libelle_service = libelle_service;   
    vector<Employe> list_empl;
}

std::vector<Employe> Service::getEmploye(){
 return this->list_empl;
}


bool Service::verifyId(int id){
    bool exist_deja = false;
    for(int i = 0; i < this->list_empl.size();i++){
       if (this->list_empl.at(i).getId() == id){
            exist_deja  = true;
       }
    }
    return exist_deja;
}
void Service::ajouterEmploye(string nom, string prenom, string lien_image){
    int id = rand() % 100 + 1;
    bool exist = this->verifyId(id);
    while(exist){
        id= rand() % 100 + 1;
        exist = this->verifyId(id);
    }

    Employe * unEmploye = new Employe(id,nom,prenom, lien_image );
    this->list_empl.push_back(*unEmploye);
}
void Service::supprimerEmploye(int id){
    if (this->verifyId(id)){
      this->list_empl.erase(this->list_empl.begin()+getIndice(id));
    }
}
void Service::modifierEmploye(int id,string nom, string prenom, string lien_image){
    Employe unEmploye = this->getEmploye(id);
    unEmploye.setId(id);
    unEmploye.setNom(nom);
    unEmploye.setPrenom(prenom);
    unEmploye.setLien_image(lien_image);
    cout<<getIndice(id)<<endl;
    this->list_empl.at(getIndice(id))  = unEmploye;
}
int Service::getIndice(int id){
    int indice = 0;

    for( int i = 0;i < this->list_empl.size(); i++){
        if ( this->list_empl.at(i).getId() ==  id){
         indice = i;
        }
    }

    return indice;
}

Employe Service::getEmploye(int id){
    if (this->verifyId(id)){
        return this->list_empl.at(0);
    }    
}

Service::~Service()
{

}
