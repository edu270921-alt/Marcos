#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int V, A, F, P;
    cin >> V >> A >> F >> P;

    int contas[3] = {A, F, P};
    sort(contas, contas + 3);

    int resp = 0;

    for (int i = 0; i < 3; i++) {
        if (V >= contas[i]) {
            V -= contas[i];
            resp++;
        }
    }
