/*
    Claudio Maximiliano Guzmán Durán
    23310157
    2P
    Examen diagnostico
    08-02-2024
*/
#include <iostream>

using namespace std;

class Weapon{
    private: 
        string tipo;
    public:
        Weapon(string);
        void mostrarArma();
};

class Sword: public Weapon{
    private:
        int atqFisico;
    public:
        Sword(string, int);
        void mostrarSword();
};

class Grimoire: public Weapon{
    private:
        int atqMagico;
    public:
        Grimoire(string, int);
        void mostrarGrimoire();
};

Weapon::Weapon(string _tipo){
    tipo = _tipo;
}

Sword::Sword(string _tipo, int _atqFisico) : Weapon(_tipo){
    atqFisico = _atqFisico;
}

Grimoire::Grimoire(string _tipo, int _atqMagico) : Weapon(_tipo){
    atqMagico = _atqMagico;
}

void Weapon::mostrarArma(){
    cout<<"Elegiste un arma de tipo "<<tipo<<endl;
}

void Sword::mostrarSword(){ 
    mostrarArma();
    cout<<"Con un ataque fisico de "<<atqFisico<<endl;
}

void Grimoire::mostrarGrimoire(){ 
    mostrarArma();
    cout<<"Con un ataque magico de "<<atqMagico<<endl;
}

int main()
{
    Sword weapon1("Espada", 100);
    weapon1.mostrarSword();

    Grimoire weapon2("Grimorio", 100) ;
    weapon2.mostrarGrimoire();
    
    return 0;
}
