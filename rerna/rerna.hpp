#ifndef RERNA_HPP_INCLUDED
#define RERNA_HPP_INCLUDED
#define TMIN 0
#define TMAX 220
#define KORAK 20

enum Stanje{ UKLJUCENA, ISKLJUCENA, POKVARENA };

class Rerna{
    private:
        Stanje stanje;
        int temperatura;

    public:
        Rerna(){
            stanje=ISKLJUCENA;
            temperatura=TMIN;
        }

    bool ukljuci(){
        if(stanje == ISKLJUCENA){
            stanje = UKLJUCENA;
            temperatura += KORAK;

        return true;
    }

    return false;
    }

    bool iskljuci(){
        if(stanje == UKLJUCENA){
            stanje = ISKLJUCENA;
            temperatura = TMIN;

            return true;
        }

        return false;
    }

    bool pokvari(){
        if(stanje == UKLJUCENA || stanje == ISKLJUCENA){
            stanje = POKVARENA;
            temperatura = TMIN;

            return true;
        }

        return false;
    }

    bool popravi(){
        if(stanje == POKVARENA){
            stanje = ISKLJUCENA;
            temperatura = TMIN;

            return true;
        }

        return false;
    }

    bool pojacaj(){
        if(stanje == UKLJUCENA && temperatura+KORAK<=TMAX){
            temperatura += KORAK;

            return true;
        }

        return false;
    }

    bool smanji(){
        if(stanje == UKLJUCENA && temperatura+KORAK>=TMIN){
            temperatura -= KORAK;

            return true;
        }

        return false;
    }

    Stanje getStanje() const { return stanje;}

    int getTemperatura() const { return temperatura;}
};

#endif // RERNA_HPP_INCLUDED
