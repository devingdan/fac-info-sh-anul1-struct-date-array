/* Aplicatia permite inregistrarea intr-un array a punctajelor marcate de un jucator de baschet
 in ultimile sale 5 meciuri jucate si afisarea acestora */


#include <iostream>
using namespace std;

void afiseazaPunctaj(int[], int);
void inregistreazaPunctaj(int array[], int size);


int main()
{

    int punctaj[5]; // crearea unui array

    punctaj[0] = 14; //predefinirea fiecarui element
    punctaj[1] = 20;
    punctaj[2] = 22;
    punctaj[3] = 16;
    punctaj[4] = 30;

    afiseazaPunctaj(punctaj, 5); // apelarea functiei afiseazaPunctaj -> afiseaza arrayul in starea initiala;

    inregistreazaPunctaj(punctaj, 5); // apelarea functiei inregistreazaPunctaj;

    afiseazaPunctaj(punctaj, 5); //apelarea functiei afiseazaPunctaj dupa modificarile facute in arrayul punctaj;

}

void afiseazaPunctaj(int array[], int size) // afiseaza componentata arrayului in starea actuala;
{
    for(int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }
}

void inregistreazaPunctaj(int array[], int size) // lasa utilizatorul sa modifice arrayul
{
    for(int i = 0; i < size; i++)
    {
        cout << "Introduceti punctajele marcate de jucator la ultimele 5 meciuri: " << endl;
        cin >> array[i];
    }
}
