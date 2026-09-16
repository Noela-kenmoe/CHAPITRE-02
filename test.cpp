#include <iostream>

int main(){
  int i,nbm;
  float moy, som ;
  float T[10] ;
  
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
 return 0;

}