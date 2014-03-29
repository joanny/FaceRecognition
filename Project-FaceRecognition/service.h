#ifndef SERVICE_H
#define SERVICE_H
#include <string>
#include <vector>
#include "employe.h"

using namespace std;


class Service
{
    public :
        Service();
        Service(string libelle_service);
        void ajouterEmploye(string nom, string prenom, string lien_image);
        bool verifyId(int id);
        void supprimerEmploye(int id);
        void modifierEmploye(int id,string nom, string prenom, string lien_image);
        std::vector<Employe> getEmploye();
        Employe getEmploye(int id);
        int getIndice(int id);
        virtual ~Service();
   private:
        int id_service;
        string libelle_service;       
        std::vector<Employe> list_empl;
};

#endif // SERVICE_H
