#include <iostream>
#include <iomanip>

using namespace std;

#include "Commande.h"
#include "Ligne.h"
#include "Article.h"
#include "Client.h"

int main() 
{
   /* Question 5 */
   Client c1("Jacque");

   cout << "Prénom " << c1.getNom() << endl;
   
}
