#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "_teolib.h"


// --------- ARRAY ---------

void tl_array_init(int v[], int dim) {
    if (v == NULL || dim <= 0) return;

    for (int i = 0; i < dim; i++) {
        v[i] = 0;
    }
}

void tl_array_fill_rnd(int v[], int dim) {
    if (v == NULL || dim <= 0) return;

    for (int i = 0; i < dim; i++) {
        v[i] = 1 + (rand() % 99);
    }
}

void tl_array_fill_rnd_range(int v[], int dim, int min, int max) {
    if (v == NULL || dim <= 0 || min > max) return;

    long long range = (long long)max - min + 1;

    for (int i = 0; i < dim; i++) {
        v[i] = min + (rand() % range);
    }
}

void tl_array_print(int v[], int dim) {
    if (v == NULL || dim <= 0) return;

    for (int i = 0; i < dim; i++) {
        printf("%d ", v[i]);
    }

    printf("\n");
}

float tl_array_average(int v[], int dim) {
    if (v == NULL || dim <= 0) return 0.0f;

    long long sum = 0;

    for (int i = 0; i < dim; i++) {
        sum += v[i];
    }

    return (float)sum / dim;
}

// mode 0 = crescente
// mode 1 = decrescente

void tl_array_sort_mode(int v[], int dim, int mode) {
    if (v == NULL || dim <= 0 || (mode != 0 && mode != 1)) return;

    int tmp;

    for (int i = 0; i < dim - 1; i++) {
        for (int j = i + 1; j < dim; j++) {

            if ((mode == 0 && v[j] < v[i]) ||
                (mode == 1 && v[j] > v[i])) {

                tmp = v[i];
                v[i] = v[j];
                v[j] = tmp;
            }
        }
    }
}


// --------- MATRICI ---------

void tl_mat_fill_rnd(int dim, int m[dim][dim], int rnd_min, int rnd_max) {
    if (dim <= 0 || rnd_min > rnd_max) return;

    long long range = (long long)rnd_max - rnd_min + 1;

    for (int i = 0; i < dim; i++) {
        for (int j = 0; j < dim; j++) {
            m[i][j] = rnd_min + (rand() % range);
        }
    }
}

void tl_mat_print(int rows, int cols, int m[rows][cols]) {
    if (rows <= 0 || cols <= 0) return;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (j == 0) printf("[");

            printf("%3d ", m[i][j]);

            if (j == cols - 1) printf("]");
        }

        printf("\n");
    }
}

void tl_square_mat_scalar(int input_filler, int dim, int m[dim][dim]) {
    if (dim <= 0) return;

    for (int i = 0; i < dim; i++) {
        for (int j = 0; j < dim; j++) {

            if (i == j) {
                m[i][j] = input_filler;
            } else {
                m[i][j] = 0;
            }
        }
    }
}

bool tl_square_mat_symmetry(int lato, int m[lato][lato]) {
    if (lato <= 0) return false;

    for (int i = 0; i < lato; i++) {
        for (int j = i + 1; j < lato; j++) {

            if (m[i][j] != m[j][i]) {
                return false;
            }
        }
    }

    return true;
}

float tl_mat_average(int rows, int cols, int m[rows][cols]) {
    if (rows <= 0 || cols <= 0) return 0.0f;

    long long sum = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += m[i][j];
        }
    }

    return (float)sum / ((float)rows * cols);
}

void tl_mat_sum_rows(int rows, int cols, int m[rows][cols]) {
    if (rows <= 0 || cols <= 0) return;

    long long sum_righe;

    for (int i = 0; i < rows; i++) {
        sum_righe = 0;

        for (int j = 0; j < cols; j++) {
            printf("%3d", m[i][j]);
            sum_righe += m[i][j];
        }

        printf("  -> %lld\n", sum_righe);
    }
}

void tl_mat_triangle_sum(int rows, int cols, int m[rows][cols]) {
    if (rows <= 0 || cols <= 0) return;

    long long somma_down_t = 0;
    long long somma_up_t = 0;
    long long somma_diag_t = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {

            if (j > i) {
                somma_up_t += m[i][j];
            }

            if (i > j) {
                somma_down_t += m[i][j];
            }

            if (i == j) {
                somma_diag_t += m[i][j];
            }
        }
    }

    printf("Somma triangolo superiore: %lld\n", somma_up_t);
    printf("Somma triangolo inferiore: %lld\n", somma_down_t);
    printf("Somma diagonale: %lld\n", somma_diag_t);
}


// --------- STRINGHE ---------

void tl_str_init(int dim, char str[dim]) {
    if (str == NULL || dim <= 0) return;

    for (int i = 0; i < dim; i++) {
        str[i] = '\0';
    }
}

unsigned int tl_str_len(const char* s) {
    if (s == NULL) return 0;

    unsigned int len = 0;

    while (s[len] != '\0') {
        len++;
    }

    return len;
}

bool tl_str_copy(char dst[], int dim, const char src[]) {
    if (dst == NULL || src == NULL || dim <= 0) return false;

    unsigned int len = tl_str_len(src);

    if (len >= dim) return false;

    for (unsigned int i = 0; i < len; i++) {
        dst[i] = src[i];
    }

    dst[len] = '\0';

    return true;
}

bool tl_str_concat(char dst[], int dim, const char src[]) {
    if (dst == NULL || src == NULL || dim <= 0) return false;

    int i = 0;

    while (i < dim && dst[i] != '\0') {
        i++;
    }

    if (i == dim) return false;

    unsigned int len = tl_str_len(src);

    if (len >= dim - i) return false;

    for (unsigned int j = 0; j < len; j++, i++) {
        dst[i] = src[j];
    }

    dst[i] = '\0';

    return true;
}

int tl_str_cmp(const char* s1, const char* s2) {
    if (s1 == NULL || s2 == NULL) {
        fprintf(stderr, "ERRORE: puntatore NULL\n");
        exit(EXIT_FAILURE);
    }

    int i;

    for (i = 0; s1[i] == s2[i] && s1[i] != '\0'; i++) {
    }

    return s1[i] - s2[i];
}

bool tl_str_substr_at_pos(const char* haystack, int pos, const char* needle) {
    if (haystack == NULL || needle == NULL || pos < 0) {
        return false;
    }

    unsigned int hl = tl_str_len(haystack);
    unsigned int nl = tl_str_len(needle);

    if ((unsigned int)pos > hl || nl > hl - pos) {
        return false;
    }

    for (unsigned int i = 0; i < nl; i++) {
        if (haystack[pos + i] != needle[i]) {
            return false;
        }
    }

    return true;
}

int tl_str_find_substr(const char* s, const char* subStr) {
    if (s == NULL || subStr == NULL) return -1;

    if (subStr[0] == '\0') return 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (tl_str_substr_at_pos(s, i, subStr)) {
            return i;
        }
    }

    return -1;
}