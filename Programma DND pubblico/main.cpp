#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void D20(int & TipoDado, int & NumeroVolte){
    srand(time(NULL));
        for(int i=0; i<NumeroVolte; ++i){
            int dado = rand()%TipoDado +1;
            cout <<"la facciata del dado e': "<< dado <<endl;
        }
}
void Vita(int & NumeroDadi, int & TipoDadi){
    srand(time(NULL));

    int somma=0;
    cout<<"inserire il numero di dadi da lanciare: ";
    cin >> NumeroDadi;
    cout<<"inserire il tipo di dadi lanciare: ";
    cin >> TipoDadi;
    for(int i = 0; i < NumeroDadi; ++i){
        int Dado=rand()%TipoDadi+1;
        cout<<Dado<<endl;
        somma+=Dado;
    }
    int HP;
    cout <<"inserire il numero da addizionare di HP: ";
    cin >> HP;
    somma+=HP;
    cout<<"la vita del boss e' di: "<< somma << "HP"<< endl;
}
void Eseperienza(int & PuntiEsperienza, int& NumeroGiocatori, int &NumeroMostri){
    int somma = 0;
    cout<<"inserire il numero di mostri presenti: ";
    cin >> NumeroMostri;
    for(int i=0; i<NumeroMostri; ++i){
        cout<<"inerire i punti esperienza: ";
        cin >> PuntiEsperienza;
        somma+= PuntiEsperienza;
    }
    cout <<"inserire quanti giocatori hanno partecipato: ";
    cin >> NumeroGiocatori;
    int divisore = somma/NumeroGiocatori;
    cout <<"i punti esperienza a testa sono: "<< divisore <<endl;

}
int Danni(int vita, int DanniGiocatori, int Danno){
    int somma=0;
    cout<<"inserire la vita dell'entita': ";
    cin >> vita;
    cout<<"inserire il numero di giocatori che attaccano: ";
    cin >> DanniGiocatori;
    for(int i=0; i<DanniGiocatori;++i){
        cout<<"inserire il danno: ";
        cin >> Danno;
        vita-=Danno;
        cout<<vita;
    }
    return vita;
}
int main()
{
    int menu;
    cout << "inserire il tipo di modalita' che si vuole utilizzare: 1 tiro casuale dei dadi, 2 calcolo dei punti vita del boss, 3 xp per giocatore, 4 calcolo dei danni inflitti: "<<endl;
    cin  >> menu;
    switch(menu){
case 1:
    int td;
    int dt;
    cout <<"inserire il dado: ";
    cin >> td;
    cout <<"inserire il numero di volte che si vuole tirare il dado: ";
    cin >> dt;
    D20(td,dt);
    break;
case 2:
    int d;
    int tipodadi;
    Vita(d, tipodadi);
    break;
case 3:
   int ng, nm, xp;
    Eseperienza(nm, ng, xp);
    break;
case 4:
    int vt, dg, dn;
    Danni(vt, dg, dn);
    break;
default:
    cout<<"ciao";
    }
    return 0;
}
