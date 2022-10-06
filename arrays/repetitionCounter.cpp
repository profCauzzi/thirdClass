//
// Created by Luciano Cauzzi on 06/10/22.
//
#include <iostream>
using namespace std;
int main ()
{
    //memorizziamo i dati in un array
    const int races=10;
    int places[races]={5, 1, 3, 3, 4, 1, 2, 5, 2, 1};

    //i, j e k saranno i contatori per tre cicli
    int i, j, k, count;
    bool isPresent;

    //primo ciclo su tutti i valori dell'array
    for (i=0; i < races; i++)
    {
        isPresent=false ;
        //secondo ciclo sui valori dell'array con indice minore di i
        for (j=0; j<i; j++)
        {
            //se un valore si era già presentato, isPresent diventa true
            if (places[j] == places[i]) isPresent=true;
        }

        //se invece il valore con indice i non era già isPresent...
        if(isPresent == 0)
        {
            count=0 ;
            //il terzo ciclo count quante volte quel valore si ripete
            for(k=i; k < races; k++)
            {
                if(places[k] == places[i]) count++;
            }
            cout << "Il piazzamento " << places[i];
            cout << " e' isPresent " << count << " volte" << endl;
        }
    }
    return 0;
}