#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

int fibs(int position);

int main(int argc, char** argv) {
  if (argc >= 1){
    int posicion = atoi(argv[1]);
    cout << fibs(posicion) << endl;
  }
    return 0;
}

int fibs(int position){
  if(position <= 0){
    return 0;
  }
  else if(position < 2){
    return 1;
  }
  return fibs(position-1) + fibs(position-2);
}