#include <opencv/cv.h>
#include <opencv/highgui.h>
#include <stdio.h>
#include <iostream>
using namespace std;
#include <employe.h>
int main( )
{
  Employe * emp = new Employe("simp","joan","lien");
  cout<<emp->nom<<endl;
}
