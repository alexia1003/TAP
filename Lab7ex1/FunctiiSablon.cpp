#include "FunctiiSablon.h"

using namespace std;

template <typename T>
void gasesteMinMax(const vector<T>& arr, T& maxVal, T& minVal) {
    if (arr.empty()) {
        cout << "Vectorul este gol!\n";
        return;
    }

    maxVal = minVal = arr[0];
    for (const auto& elem : arr) {
        if (elem > maxVal) {
            maxVal = elem;
        }
        if (elem < minVal) {
            minVal = elem;
        }
    }
}

template <typename T>
bool cautareSecventiala(const vector<T>& arr, const T& key) {
    for (const auto& elem : arr) {
        if (elem == key) {
            return true;
        }
    }
    return false;
}

template <typename T>
bool cautareBinara(const vector<T>& arr, const T& key) {
    return binary_search(arr.begin(), arr.end(), key);
}

template <typename T>
void sortareBule(vector<T>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

template <>
void sortareBule(vector<string>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] < arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
