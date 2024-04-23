#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int T = 0;
    cin >> T;
    while (T--)
    {
        int M, N;
        cin >> M >> N;

        int maze[M][N];

        for (int i = 0; i < M; i++)
        {
            for (int j = 0; j < N; j++)
            {
                maze[i][j] = 0;
            }
        }

        for (int i = 0; i < M; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cin >> maze[i][j];
            }
        }

        int top = 0, bottom = M - 1, left = 0, right = N - 1;
        while (top <= bottom && left <= right)
        {
            for (int i = left; i <= right; i++)
            {
                cout << maze[top][i] << " ";
            }
            top++;

            if (top <= bottom)
            {
                for (int i = top; i <= bottom; i++)
                {
                    cout << maze[i][right] << " ";
                }
                right--;
            }

            if (top <= bottom && left <= right)
            {
                for (int i = right; i >= left; i--)
                {
                    cout << maze[bottom][i] << " ";
                }
                bottom--;
            }

            if (top <= bottom && left <= right)
            {
                for (int i = bottom; i >= top; i--)
                {
                    cout << maze[i][left] << " ";
                }
                left++;
            }
        }
    }

    return 0;
}