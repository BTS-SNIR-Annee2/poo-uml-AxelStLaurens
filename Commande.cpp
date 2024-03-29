#include <iostream>
#include <iomanip>
#include "Commande.h"
#include <string>
#include "Ligne.h"
using namespace std;

Commande::Commande(std::string reference, std::string date)
{
	this->reference = reference;
	this->date = date;
}

string Commande::getReference() const
{
	return reference;
}

void Commande::setReference(string reference)
{
	this->reference=reference;
}

string Commande::getDate() const
{
	return this->date;
}

void Commande::setDate(string date)
{
	this->date=date;
}

Ligne Commande::getLigne(int numero) const
{
	return liste[numero];
}

void Commande::setLigne(const Ligne &l)
{
	liste.push_back(l);
} 

double Commande::getTotal()
{
	double total;
	for(unsigned i = 0; i < liste.size(); i++)
	{
	
	total = total + liste[i].getMontant();
}
	return total;
}
int Commande::getNbArticles() const
{
	int nbarticles = sizeof(liste);
	return nbarticles;
}

void Commande::afficher()
{
	cout << setfill(' ') << setw(3) << "Qte"; 
   cout << "|" << setfill(' ') << setw(50) << "Description"; 
   cout << "|" << setfill(' ') << setw(8) << "Prix uni"; 
   cout << "|" << setfill(' ') << setw(15) << "Total\n";
   cout << setfill('-') << setw(80) << "\n";
	
	
	for (unsigned i=0; i < liste.size(); i++)
	{
		liste[i].afficher();
		cout << endl;
	
	}
	cout << setfill('-') << setw(80) << "\n";
	cout << getDate();
	 cout << "|" << setfill(' ') << setw(53) << getTotal() << "euros";
}
