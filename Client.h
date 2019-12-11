#ifndef CLIENT_H
#define CLIENT_H

#include <vector>
#include <string>
#include "Commande.h"

class Commande;
class Client
{
	private :
	std::string nom;
	int numero;
	
	
	public :
	Client(std::string nom="");
	
	std::string getNom() const;
	int getNumero();
	void setNom(std::string nom);
	
};

#endif
