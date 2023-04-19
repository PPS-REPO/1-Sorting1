#include "testlib.h"

using namespace std;

int ar[202020];

int main(int argc, char** argv) {
    int n, l, r;
    
    registerGen(argc, argv, 1);

    n = atoi(argv[1]);
    l = atoi(argv[2]);
    r = atoi(argv[3]);

    printf("%d\n", n);
    for (int i = 0; i < n; ++i) {
        ar[i] = rnd.next(l, r);
    }
    for (int i = 0; i < n; ++i) printf("%d\n", ar[i]);
    return 0;
}
