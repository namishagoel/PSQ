#include <bits/stdc++.h>
using namespace std;

int parent[200010];
int cycle_size[200010];

int find_root(int u) {
    if(parent[u] == u)
        return u;
    return parent[u] = find_root(parent[u]);
}

int main() {
    int q;
    scanf("%d", &q);
    while(q--) {
        int n;
        scanf("%d", &n);
        for(int i = 1;i <= n; i++) {
            parent[i] = i;
            cycle_size[i] = 1;
        }
        for(int i = 1; i <= n; i++) {
            int p;
            scanf("%d", &p);
            int rootu = find_root(i);
            int rootv = find_root(p);
            if(rootu == rootv)
                continue;
            cycle_size[rootv] += cycle_size[rootu];
            cycle_size[rootu] = 0;
            parent[rootu] = rootv;
        }
        for(int i = 1; i <= n; i++) {
            int rootu = find_root(i);
            printf("%d ",cycle_size[rootu]);
        }
        printf("\n");
    }
    return 0;
}
