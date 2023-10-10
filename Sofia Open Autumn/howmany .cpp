#include <iostream>
using namespace std;

int main () {
   int M, N, P, Q;
   cin >> M >> N >> P >> Q;
   int K;
   cin >> K;
   if (K == 1) {
       cout << min(P,N);
   }
   if (K == 2) {
       cout << max(0, Q - M);
   }
   if (K == 3) {
       cout << max(0, M - (P + Q));
   }

   return 0;
}
