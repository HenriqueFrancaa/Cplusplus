#include <iostream>
#include <vector>
using namespace std;

int BuscaBinaria(vector<int>numeros,int vt, int procurar){
  int low = 0;
  int high = vt - 1;
  int mid = 0;
  while(low <= high){
    mid = (low + high)/2;
    if(numeros[mid] == procurar){
      return mid;
    }
    else{
      if(numeros[mid] > procurar){
        high = mid - 1;
      }
      else{
        low = mid + 1;
      }
    }
  }
  return -1;
}


int main(){
  int tamanho,n;
  cin >> tamanho;

  vector<int>numeros;

  for(int i = 0; i < tamanho; i++){
    cin >> n;
    numeros.push_back(n);
  }

  int procurado;
  cin >> procurado;

  int indice = BuscaBinaria(numeros,tamanho,procurado);
  cout << "O numero foi encontrado no indice: " << indice << endl;
}