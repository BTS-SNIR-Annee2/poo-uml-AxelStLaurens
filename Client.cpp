#include <iostream>
#include <iomanip>
#include "Commande.h"
#include <string>
#include "Client.h"
using namespace std;

   Client::Client(string nom)
   {
	   this->nom=nom;
   }

string Client::getNom() const
{
	return nom;
}
int Client::getNumero()
{
	return this->numero;
}
	
void Client::setNom(string nom)
{
	this->nom=nom;
}
	

