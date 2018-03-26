#include <bits/stdc++.h>
using namespace std;

int main() {
  int nc, n, k;

  // while (scanf("%d", &nc) != EOF) {
    scanf("%d %d", &n, &k);
    std::vector<int> v;
    for (int i = 0; i < n; i++) {
      v.push_back(i+1);
    }

    // for (int i = k-1; v.size() == 1; i += k) {
      v.erase(1);
    // }
    printf("YEE %d\n", v[0]);
    // nc--;

  // }
  return 0;
}
