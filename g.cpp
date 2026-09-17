#include<iostream>

struct point
{
    float x;
    float y;
};
struct vecteur 
{
    float a;
    float b;
};

float addvect( vecteur* Ns , vecteur Vs);
int main ()
{
 //TEST 2
    vecteur* Ns;
    vecteur s;
    std::cout<<" entrer les coordonees du premier vecteur :\n";
    std::cin>>Ns->a>>Ns->b;
    std::cout<<"entrer les coordonnees du second vecteur :\n";
    std::cin>>s.a>>s.b;
    addvect(Ns, s);
    std::cout<<"la somme de ces deux vecteurs est :"<<"("<<Ns->a<<","<<Ns->b<<")";
     return 0;
}
float addvect( vecteur* Ns , vecteur Vs)
{
    Ns->a += Vs.a;
    Ns->b += Vs.b;
    return 0;
}