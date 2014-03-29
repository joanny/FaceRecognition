#ifndef EMPLOYE_H
#define EMPLOYE_H
#include <string>
using namespace std;
class Employe
{
    public:
      Employe();
      Employe(int id, string nom, string prenom, string lien_image);
      bool isMe(Employe unEmploye);
      int getId();


      /*  setteurs   */
      void setNom(string nom);
      void setPrenom(string prenom);
      void setLien_image(string lien_image);
      void setId(int id);
      /*  fin setteurs*/



      /* getteurs  */

      string getNom();
      string getPrenom();
      string getLien_Image();

      /*fin getteurs */
      string toString();
       virtual ~Employe();

   private:
      int id;
      string nom ;
      string prenom;
      string lien_image;

};

#endif // EMPLOYE_H
