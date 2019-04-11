// SSE headers
#include <smmintrin.h> //v4
#include <stdio.h>

int main()
{

    // Definition of matrixes

    float a[4][4] = {{7, 7, 7, 2}, {1, 1, 2, 1}, {3, 3, 1, 3}, {15, 0, 9, 4}};
    float b[4][4] = {{7, 3, 6, 9}, {1, 5, 3, 0}, {0, 1, 2, 3}, {2, 5, 6, 3}};
    float c[4][4];

    // Definition of variables to use of SSE
    __m128i vector1;
    __m128i vector2;
    __m128i result;

    // Multiplication of matrixes
    for (int i = 0; i <= 3; i++)
    {
        vector1 = _mm_set_epi32(a[i][3], a[i][2], a[i][1], a[i][0]);
        for (int j = 0; j <= 3; j++)
        {
            vector2 = _mm_set_epi32(b[3][j], b[2][j], b[1][j], b[0][j]);
            result = _mm_mullo_epi32(vector1, vector2);
            c[i][j] = _mm_extract_epi32(result, 0) +
                      _mm_extract_epi32(result, 1) +
                      _mm_extract_epi32(result, 2) +
                      _mm_extract_epi32(result, 3);
        }
    }

    // Print result
    for (int x = 0; x <= 3; x++)
    {
        for (int y = 0; y <= 3; y++)
        {
            printf("%f\t", c[x][y]);
        }
        printf("\n");
    }

    return 1;
}