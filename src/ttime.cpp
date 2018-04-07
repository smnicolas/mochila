#include <iostream>
#include <numeric>
#include <chrono>

#include "mochila.h"

using namespace std;
void test_cons(int n, int W) ;


int main (int argc, char ** argv) {

     int n;
     int W = rand_int_mod(1000) ;
     if (argc == 2) {
          n = atoi(argv[1]);
          cout << W << " " << n << " ";
          test_cons(n, W);
     } else if (argc == 3){
          W = atoi(argv[1]);
          n = atoi(argv[2]);
          cout << n << " " << W << " " ;
          test_cons(n, W);
          cout << endl;
     } else {
          cout << "uso: " << argv[0] << " W n.\n";
     }
}
