#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX_M 100
#define MAX_N 100

int m, n, cont;
char v[MAX_M][MAX_N + 1];
int visited[MAX_M][MAX_N];



void dfs(int a, int b) {
    visited[a][b] = 1;

    if(a+1>=0 && a+1<m && b+1>=0 && b+1<n && !visited[a+1][b+1])
    {
        visited[a+1][b+1] = 1;
        if (v[a+1][b+1] == '@')
        dfs(a+1, b+1);
    }

     if(a+1>=0 && a+1<m && b>=0 && b<n && !visited[a+1][b])
    {
        visited[a+1][b] = 1;
        if (v[a+1][b] == '@')
        dfs(a+1, b);
    }

    if(a+1>=0 && a+1<m && b-1>=0 && b-1<n && !visited[a+1][b-1])
    {
        visited[a+1][b-1] = 1;
        if (v[a+1][b-1] == '@')
        dfs(a+1, b-1);
    }

     if(a-1>=0 && a-1<m && b+1>=0 && b+1<n && !visited[a-1][b+1])
    {
        visited[a-1][b+1] = 1;
        if (v[a-1][b+1] == '@')
        dfs(a-1, b+1);
    }

     if(a-1>=0 && a-1<m && b>=0 && b<n && !visited[a-1][b])
    {
        visited[a-1][b] = 1;
        if (v[a-1][b] == '@')
        dfs(a-1, b);
    }

    if(a-1>=0 && a-1<m && b-1>=0 && b-1<n && !visited[a-1][b-1])
    {
        visited[a-1][b-1] = 1;
        if (v[a-1][b-1] == '@')
        dfs(a-1, b-1);
    }

     if(a>=0 && a<m && b+1>=0 && b+1<n && !visited[a][b+1])
    {
        visited[a][b+1] = 1;
        if (v[a][b+1] == '@')
        dfs(a, b+1);
    }

     if(a>=0 && a<m && b-1>=0 && b-1<n && !visited[a][b-1])
    {
        visited[a][b-1] = 1;
        if (v[a][b-1] == '@')
        dfs(a, b-1);
    }



}

int main() {

    while (1) {
        scanf("%d %d", &m, &n);
        if (m == 0) break;
        int i,j;
        for (i = 0; i < m; i++)
            scanf("%s", v[i]);

        cont = 0;
        memset(visited, 0, sizeof(visited));

        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                if (!visited[i][j]) {
                    visited[i][j] = 1;
                    if (v[i][j] == '@') {
                        cont++;
                        dfs(i, j);
                    }
                }
            }
        }

        printf("%d\n", cont);
    }
    return 0;
}

