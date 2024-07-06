#include <iostream>
#include "Header.h"

using namespace std;

int main()
{
    int m1[] = {2,4,5,6};
    int n= 4;
     Multime <int>Mi(m1, n);
     Mi.afisare();

     float m3[] = { 5.3,7.9,5.4,5.6 };
     Multime <float> Mf(m3, n);
     Mf.afisare();

     Multime <float> M(Mf);
     M.afisare();

     cout << !Mi;
     cout << endl;
     cout << !Mf;
     cout << endl;

     cout << "Prima suma este" << " ";
     (Mf + M).afisare();
    
     float m4[] = { 2.4,4.5,5.6,6.9 };
     Multime <float>M2(m4, n);
     M2.afisare();

     cout << "A doua suma" << " ";
     (Mf + M+M2).afisare();

    cout<< Aduna<int>(3, 4);
    cout << endl << "Suma cu functia Aduna" << " ";
    Aduna<Multime<float>>(Mf, M).afisare();


  
     return 0;

}


