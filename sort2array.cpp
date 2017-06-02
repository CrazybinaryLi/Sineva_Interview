#include "boost/array.hpp"

#define max(a,b) ((a)<(b)?(a):(b))

int& sort(int* a, const int len_a, int* b, const int len_b) {

  int c[1000];
  //boost::array<int, len_a + len_b> arr;

  if(len_a >= len_b){
    int m = 0;
    for(int i = 0,j = 0; i < len_b;) {
        if(a[i] > b[j])
        {
            c[m++] = b[j];
            j++;
        }
        else if(a[i] == b[j])
        {
            c[m++] = a[i];
            i++;
            j++;
        }
        else
        {
            c[m++] = a[i];
            i++;
        }

        if(i == len_a) {
            for(; j < len_b; j++) {
                c[m++] = b[j];
            }
        }

        if(j == len_b) {
            for(; i < len_a; i++) {
                c[m++] = b[i];
            }
        }
    }
  }
  else
  {

  }


  return *c;
}
