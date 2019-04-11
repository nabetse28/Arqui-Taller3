// SSE headers
#include <emmintrin.h> //v3
#include <smmintrin.h> //v4
#include <stdio.h>

int main()
{

    // Algorithm to choose numbers

    int i = 0;
    short array[15];
    for (i; i <= 15; i++)
    {
        if (i <= 7)
        {
            printf("Choose a number for the vector 1: \n");
            scanf("%hd", &array[i]);
        }
        else
        {
            printf("Choose a number for the vector 2: \n");
            scanf("%hd", &array[i]);
        }
    }

    __m128i vector1 = _mm_set_epi16(array[7], array[6], array[5], array[4], array[3], array[2], array[1], array[0]);
    __m128i vector2 = _mm_set_epi16(array[15], array[14], array[13], array[12], array[11], array[10], array[9], array[8]);

    int data = 0;

    // PRINT OF VECTOR 1

    data = _mm_extract_epi16(vector1, 0);

    printf("THIS IS THE VECTOR 1: [%d,", data);

    data = _mm_extract_epi16(vector1, 1);

    printf("%d,", data);

    data = _mm_extract_epi16(vector1, 2);

    printf("%d,", data);

    data = _mm_extract_epi16(vector1, 3);

    printf("%d,", data);

    data = _mm_extract_epi16(vector1, 4);

    printf("%d,", data);

    data = _mm_extract_epi16(vector1, 5);

    printf("%d,", data);

    data = _mm_extract_epi16(vector1, 6);

    printf("%d,", data);

    data = _mm_extract_epi16(vector1, 7);

    printf("%d]\n", data);

    // PRINT OF VECTOR 2

    data = _mm_extract_epi16(vector2, 0);

    printf("THIS IS THE VECTOR 2: [%d,", data);

    data = _mm_extract_epi16(vector2, 1);

    printf("%d,", data);

    data = _mm_extract_epi16(vector2, 2);

    printf("%d,", data);

    data = _mm_extract_epi16(vector2, 3);

    printf("%d,", data);

    data = _mm_extract_epi16(vector2, 4);

    printf("%d,", data);

    data = _mm_extract_epi16(vector2, 5);

    printf("%d,", data);

    data = _mm_extract_epi16(vector2, 6);

    printf("%d,", data);

    data = _mm_extract_epi16(vector2, 7);

    printf("%d]\n", data);

    // RESULT OF THE FINAL VECTOR

    __m128i final = _mm_max_epi16(vector1, vector2);

    // PRINT OF FINAL VECTOR

    data = _mm_extract_epi16(final, 0);

    printf("THIS IS THE FINAL VECTOR: [%d,", data);

    data = _mm_extract_epi16(final, 1);

    printf("%d,", data);

    data = _mm_extract_epi16(final, 2);

    printf("%d,", data);

    data = _mm_extract_epi16(final, 3);

    printf("%d,", data);

    data = _mm_extract_epi16(final, 4);

    printf("%d,", data);

    data = _mm_extract_epi16(final, 5);

    printf("%d,", data);

    data = _mm_extract_epi16(final, 6);

    printf("%d,", data);

    data = _mm_extract_epi16(final, 7);

    printf("%d]\n", data);

    return 1;
}