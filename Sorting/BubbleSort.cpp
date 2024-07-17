void BubbleSort(int *array, int length) {
    for (int i = 0; i < length - 1; ++i) {
        for (int j = i; j < length; ++j) {
            if (array[j] > array[j + 1]) {
                int tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }
}