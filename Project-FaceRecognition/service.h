#ifndef SERVICE_H
#define SERVICE_H
#include <string>
using namespace std;


class Service
{
    public :
        Service();
        Service(string libelle_service, int nb_employe);
        virtual ~Service();
    private:
        int id_service;
        string libelle_service;
        string nb_employe;
};

#endif // SERVICE_H
