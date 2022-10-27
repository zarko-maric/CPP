#include <iostream>
#include "kocka.hpp"

using namespace std;

int main(){

Kocka k1, k2(3), k3(k2);

k1.baci();
k3.getVrednost();

return 0;
}
