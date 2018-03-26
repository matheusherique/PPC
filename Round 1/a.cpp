#include "stdc++.h"

using namespace std;

int main() {
        int reais, notas[12], centavos, c=10, i=0, aux;

        scanf("%d.%d", &reais, &centavos);
        aux = reais;
        while(c != 0 ) {
                aux = reais%c;
                aux = reais - aux;


                i++;
        }

        cout << reais;
}
