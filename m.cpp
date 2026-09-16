#include<iostream>

int main (){
    int tab[5];
    int i;
    float som , mo ;
     for (i=1 ; i<5 ; i++){
        std::cout<<"entrer la note numero" << i << ":";
        std::cin>> tab[i];
     }
     for(i=1 ; i<5 ; i++){
        som=0;
        som=som+tab[i];
        tab[i]++;
     }
     
     std::cout<<"la SOMME de la classe est :"<< som;
   return 0 ;
}