

int update(int array[], int size) {
    if (size < 4) return 1;
    array[3] = 42;
    return 0;
}

int update2(int *array, int size) {
    if (size < 4) return 1;
    *(array + 3) = 42;
    return 0;
}

int main() {
    int t[6] = {4, 8, 15, 16, 23, 42};

    update(t, sizeof(t) / sizeof(t[0]));

    int *p = &t[2];
    update(p, 4);
}