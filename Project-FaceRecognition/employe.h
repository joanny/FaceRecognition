#ifndef EMPLOYE_H
#define EMPLOYE_H
#include <string>
using namespace std;
class Employe
{
    public:
      Employe();
      Employe(string nom, string prenom, string lien_image);
       virtual ~Employe();

   private:
      int id;
      string nom ;
      string prenom;
      string lien_image;

};

#endif // EMPLOYE_H
