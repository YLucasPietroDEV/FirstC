#include <locale.h>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
  setlocale(LC_ALL, "Portuguese");
  cout<<"Ol� mundo";
  return 0;
  }