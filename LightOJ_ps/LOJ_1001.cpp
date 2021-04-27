#include <bits/stdc++.h>
using namespace std;

/**
 * Returns  the number of problems stored in each computer.
 * @param n denotes the total number of problems.
 */

/**
* @author : Abdul Al Mamun (Munna)
**/
vector<int> problemsStored(int n) {
    // Implement this method
    vector<int> result;
    if (n > 10) {
        result.push_back(10);
        result.push_back(n-10);
        return result;
    } else {
        result.push_back(0);
        result.push_back(n);
        return result;
    }

}

/**
 * Takes care of the problem input and output.
 */
int main() {
    int cases;
    scanf("%d", &cases);
    for (int caseno = 1; caseno <= cases; ++caseno) {
        int n;
        scanf("%d", &n);

        vector<int> ans = problemsStored(n);
        printf("%d %d\n", ans[0], ans[1]);
    }
    return 0;
}
