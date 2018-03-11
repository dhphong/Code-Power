#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cassert>

const int MAXN = 1000;

char mat[MAXN + 1][MAXN + 1];

int main()
{
    int w, h;
    assert(scanf("%d%d", &w, &h) == 2);
    assert(1 <= w && w <= MAXN);
    assert(1 <= h && h <= MAXN);
    for (int i = 0; i < h; ++ i) {
        assert(scanf("%s", mat[i]) == 1);
        assert(strlen(mat[i]) == w);
    }
    for (int j = 0; j < w; ++ j) {
        mat[h][j] = 'E';
    }

    int sx = -1, sy;
    for (int i = 0; i <= h; ++ i) {
        for (int j = 0; j < w; ++ j) {
            if (mat[i][j] != 'R') {
                if (mat[i][j] == 'Y') {
                    assert(sx == -1);
                    sx = i;
                    sy = j;
                }
            }
        }
    }

    assert(sx != -1);
    assert(sx == 0);

    fprintf(stderr, "(%d, %d)\n", sx, sy);

    bool mark[w];
    memset(mark, false, sizeof(mark));
    mark[sy] = true;
    for (int x = sx; x < h; ++ x) {
        bool newMark[w];
        memset(newMark, false, sizeof(newMark));
        for (int y = 0; y < w; ++ y) {
            newMark[y] |= mark[y] && (mat[x + 1][y] != 'R');
        }
        for (int y = 1; y < w; ++ y) {
            newMark[y] |= mark[y - 1] && (mat[x + 1][y] != 'R') && (mat[x][y] != 'R');
        }
        for (int y = 0; y + 1 < w; ++ y) {
            newMark[y] |= mark[y + 1] && (mat[x + 1][y] != 'R') && (mat[x][y] != 'R');
        }
        memcpy(mark, newMark, sizeof(mark));
    }

    bool valid = false;
    for (int i = 0; i < w; ++ i) {
        valid |= mark[i];
    }

    puts(valid ? "YES" : "NO");

    return 0;
}