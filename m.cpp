#include<iostream>

int main (){
    int tab[5];
    int i;
    float som=0 , mn=0 ;//première modification
     for (i=0 ; i<5 ; i++){
        std::cout<<"entrer la note numero" << i+1 << ":";
        std::cin>> tab[i];
     }
     for(i=0 ; i<5 ; i++){
        som=som+tab[i];
        
     }
     //deuxième modification
     mn = som / 5.0;
   
     
     std::cout<<"la SOMME de la classe est :"<< som;
     std::cout<<"la moyenne  est :"<< mn;//troisème  modification
   return 0 ;
}