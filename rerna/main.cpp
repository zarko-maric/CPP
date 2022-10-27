#include <iostream>
#include "rerna.hpp"
using namespace std;

void ispisiRernu(const Rerna& pera){
    cout<<"....... RERNA ......."<<endl;
    if(pera.getStanje() == UKLJUCENA) {
            cout<<"Rerna je ukljucena."<<endl;
    }
    else if(pera.getStanje() == ISKLJUCENA) {
            cout<<"Rerna je iskljucena."<<endl;
    }
    else if(pera.getStanje() == POKVARENA) {
            cout<<"Rerna je pokvarena."<<endl;
    }
    else cout<<"Rerna je u nepoznatom stanju."<<endl;

    cout<<"Temperatura: "<<pera.getTemperatura()<<endl;
    cout<<"....................."<<endl;

}

int main()
{

    Rerna r;

    ispisiRernu(r);

    r.ukljuci();
    r.iskljuci();
    r.pokvari();
    r.popravi();
    r.pojacaj();
    r.smanji();

    return 0;
}
