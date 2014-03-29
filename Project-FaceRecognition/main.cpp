#include <opencv/cv.h>
#include <opencv/highgui.h>
#include <stdio.h>
#include <iostream>
using namespace std;
#include <employe.h>
#include <service.h>

int main( )
{
    Service* unService = new Service("comptabilité");
    unService->ajouterEmploye("mike","oMike", "leplusChaudDuTierCAr");
    unService->ajouterEmploye("mike","oMike", "leplusChaudDuTierCAr");
    unService->ajouterEmploye("mike","oMike", "leplusChaudDuTierCAr");
    unService->ajouterEmploye("mike","oMike", "leplusChaudDuTierCAr");
    unService->ajouterEmploye("mike","oMike", "leplusChaudDuTierCAr");



    /* Ajout */
    printf("___Ajout__\n");
    for (int i=0;i< unService->getEmploye().size();i++){
        cout<<unService->getEmploye().at(i).toString()<<endl;
    }
    /* */

    /*  modifier */
     printf("___modifier__\n");
    unService->modifierEmploye(78,"modif","modif","modif");


    for (int i=0;i< unService->getEmploye().size();i++){
        cout<<unService->getEmploye().at(i).toString()<<endl;
    }
    /**/

    printf("___Supprimer__\n");
    /*Supprimer */
    unService->supprimerEmploye(78);

    for (int i=0;i< unService->getEmploye().size();i++){
        cout<<unService->getEmploye().at(i).toString()<<endl;
    }
    /* */
return 0;
}
