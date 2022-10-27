#ifndef KOCKA_HPP_INCLUDED
#define KOCKA_HPP_INCLUDED

class Kocka {
    private:
        int vrednost;

    public:
        Kocka();
        Kocka(int v);
        Kocka(const Kocka& k);

        void baci();

        int getVrednost()const;

};

#endif // KOCKA_HPP_INCLUDED
