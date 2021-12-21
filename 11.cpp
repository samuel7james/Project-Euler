#include <bits/stdc++.h>
int main()
{
    const unsigned int size = 20;
    unsigned int matrix[size][size];
    for (unsigned int y = 0; y < size; y++)
        for (unsigned int x = 0; x < size; x++)
            std::cin >> matrix[x][y];
    unsigned int best = 0;
    for (unsigned int y = 0; y < size; y++)
        for (unsigned int x = 0; x < size; x++)
        {
            if (x + 3 < size)
            {
                unsigned int current = matrix[x][y] * matrix[x + 1][y] * matrix[x + 2][y] * matrix[x + 3][y];
                if (best < current)
                    best = current;
            }
            if (y + 3 < size)
            {
                unsigned int current = matrix[x][y] * matrix[x][y + 1] * matrix[x][y + 2] * matrix[x][y + 3];
                if (best < current)
                    best = current;
            }
            if (x + 3 < size && y + 3 < size)
            {
                unsigned int current = matrix[x][y] * matrix[x + 1][y + 1] * matrix[x + 2][y + 2] * matrix[x + 3][y + 3];
                if (best < current)
                    best = current;
            }
            if (x + 3 < size && y >= 3)
            {
                unsigned int current = matrix[x][y] * matrix[x + 1][y - 1] * matrix[x + 2][y - 2] * matrix[x + 3][y - 3];
                if (best < current)
                    best = current;
            }
        }
    std::cout << best << std::endl;
    return 0;
}