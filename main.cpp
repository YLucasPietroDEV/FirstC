#include <locale.h>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
  setlocale(LC_ALL, "Portuguese");
  cout<<"Olá mundo";
  return 0;
  }