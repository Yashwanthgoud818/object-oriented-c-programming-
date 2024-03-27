#include <iostream>
int removeDuplicates(int arr[], int n) {
    if (n == 0 || n == 1)
        return n;
    int j = 0;

    for (int i = 0; i < n - 1; i++)
        if (arr[i] != arr[i + 1])
            arr[j++] = arr[i];

    arr[j++] = arr[n - 1];

    return j;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    n = removeDuplicates(arr, n);
    std::cout << "Updated Array: ";
    printArray(arr, n);

    return 0;
}

