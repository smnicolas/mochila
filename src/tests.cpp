
#include <vector>
#include "mochila.h"

#include <iostream>
/* #include <numeric> */
/* #include <random> */

using namespace std;

void test0(int n, int W) {

     vector<int> ps;
     vector<int> ws;
     vector<item_t> items = random_items(n);
     copiar_items(items, ps, ws);
     int res = fuerza_bruta(ps, ws, W);
     int res2 = fuerza_bruta2(items, W);
     int resmm = meet_middle (items, W);

     if (res != res2) {
          cerr << "Error!!! fb y fb2 no coincieden!!!!";
          cerr << "res: " << res << " res2: " << res2 << endl;
          exit(1);
     }
               
     if (res != resmm) {
         cerr << "Error!!! fb y meet no coincieden!!!!";
         cerr << "res: " << res << " resmm: " << resmm << endl;
         for (auto x : items)
              cout << x.first << "/" << x.second << " "<<  endl ;
         exit(1);
     } 

          cout << resmm << " " << endl;
}


void test1(int n, int W) {
     vector<item_t> items;
     items.push_back(make_pair(1, 2));
     items.push_back(make_pair(2, 4));
     items.push_back(make_pair(3,7));
     items.push_back(make_pair(5,7));
     
     int res2 = fuerza_bruta2(items, W);
     int resmm = meet_middle (items, W);
     cout << "res2:\t " << res2 << endl;
     cout << "resmm:\t" << resmm << endl;
}


void test2(int n, int W) {
     vector<item_t> items;

     vector<int> ps = { 37, 91, 52, 60 ,91, 46, 39, 83, 76, 90, 2, 51, 48, 67 };
     vector<int> ws = { 64, 77, 68, 57, 69, 28, 90, 32, 76, 45, 5, 20, 57, 61 };
     for (int i = 0; i < ps.size() ; i++) {
          items.push_back(make_pair(ps[i], ws[i]));
     }
     
     int res2 = fuerza_bruta2(items, W);
     int resmm = meet_middle (items, W);
     cout << "res2:\t " << res2 << endl;
     cout << "resmm:\t" << resmm << endl;
}

void test3(int n, int W) {
     vector<item_t> items;

     vector<int> ps = { 97, 65, 54, 79 };
     vector<int> ws = { 86, 93, 16, 60 };
     for (int i = 0; i < ps.size() ; i++) {
          items.push_back(make_pair(ps[i], ws[i]));
     }
     
     int res2 = fuerza_bruta2(items, W);
     int resmm = meet_middle (items, W);
     cout << "res2:\t " << res2 << endl;
     cout << "resmm:\t" << resmm << endl;
}


void test4(int n, int W) {
     vector<item_t> items;

     vector<int> ps = { 9, 11 };
     vector<int> ws = { 93, 47 };
     for (int i = 0; i < ps.size() ; i++) {
          items.push_back(make_pair(ps[i], ws[i]));
     }
     
     int res2 = fuerza_bruta2(items, W);
     int resmm = meet_middle (items, W);
     cout << "res2:\t " << res2 << endl;
     cout << "resmm:\t" << resmm << endl;
}

void test5(int n, int W) {
     vector<item_t> items;

     vector<int> ps = { 56, 81, 81, 98, 11, 77 };
     vector<int> ws = { 38, 55, 78, 14, 48, 48};
     for (int i = 0; i < ps.size() ; i++) {
          items.push_back(make_pair(ps[i], ws[i]));
     }
     
     int res2 = fuerza_bruta2(items, W);
     int resmm = meet_middle (items, W);

     cout << "res2:\t " << res2 << endl;
     cout << "resmm:\t" << resmm << endl;
}
