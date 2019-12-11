
#ifndef ARTICLE_H
#define ARTICLE_H
#include <string>
#include <iostream>


class Article
{
   private:
      std::string titre;
      double prix;

     
   public:
      Article(std::string titre="", double prix=0.);
      std::string getTitre() const;
      double getPrix() const;
      void setTitre(std::string nouvtitre);
      void setPrix(double nouvprix);
};

#endif //ARTICLE_H
