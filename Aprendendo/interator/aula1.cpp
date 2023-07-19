#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<string>jogos = {"TLOU", "FIFA", "OVERCOOKED", "FORTNITE", "ROCKET LEAGUE"};
    vector<string>::iterator it; // declarando o iterator

    //função begin() ---> pego o primeiro elemento do vetor, no caso (TLOU)
    //função end()-1 -----> pego o ultimo elemento do vetor, no caso (ROCKET LEAGUE)

    it = jogos.begin();
    
    // função advence() -----> permite navegar pelas casas 
    // função next() -----> eu avanço uma certa quantidade de casas para a direita (usando ja no COUT >> )
    // função prev() ------>eu avanço uma certa quantidade de casas para a esquerda(usando ja no COUT >>)

    cout << *it << endl << endl;
    // para imprimir cada elemento do vetor usando um iterator

    for(it = jogos.begin(); it != jogos.end(); it++){ // posso declarar o iterator no proprio for ---> 
                                                      //for(vector<int>::iterator it = jogos.begin())
        cout << *it << endl;
    }
    return 0;
}