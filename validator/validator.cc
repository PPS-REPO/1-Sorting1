#include "testlib.h"
using namespace std;

#define N_MIN 1
#define N_MAX 200000
#define AI_MIN -1000000
#define AI_MAX  1000000

int main(int argc, char** argv) {
    registerValidation(argc, argv);

    int n;
    
    n = inf.readInt(N_MIN, N_MAX, "N");
    inf.readEoln();
    for (int i = 0; i < n; ++i) {
        inf.readInt(AI_MIN, AI_MAX, "A_I");
        inf.readEoln();
    }
    inf.readEof();
}
