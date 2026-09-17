#include <iostream>

int main(){
  int i,nbm;
  float moy, som, nom=1 ;
  float T[10] ;
  int age;
  
    for (i=0 ; i<10 ; i++)
      {std::cout<<"donnez la note numéro"<<i++<<":"<<std::endl;
       std::cin>>T[i];
      }
    for (i=0; i<10; i++)
      { som=0;
        moy = som / 10 ;
        std::cout<<"moyenne de la classe: "<<moy<<"\n"<<std::endl;
      }
    for(i=0 ; i<10; i++)
      {nbm=0;
         std::cout<<nbm<<"eleves ont plus de cette moyenne "<<std::endl;
      }
      std::cout<<"le nom est :"<< nom;
      std::cout<<"veiller entre votre nom";
      std::cout<<"votre age est :"<< age;
 return 0;

}