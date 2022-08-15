/**********************************************************
*  PEMROGRAMAN C++                                        *
*                                                         *
*  Author  : Gesa Rizky Nugraha                           *
*  Email   : gesarizkynugraha@gmail.com                   *
*                                                         *
*  Website : karenabelajar.blogspotcom                    *
*                                                         *
***********************************************************/

#include <iostream>

using namespace std;

int main() {
  int A[10];
  for (int C=0; C<10; C++) {
    // mengisi nilai ke dalam A[C]
    A[C] = C * 10;
    // menampilkan nilai A[C]
    cout<<A[C]<<endl;
  }

  return 0;
}
