#ifndef FUNCTII_SABLON_H
#define FUNCTII_SABLON_H

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

template <typename T>
void gasesteMinMax(const vector<T>& arr, T& maxVal, T& minVal);

template <typename T>
bool cautareSecventiala(const vector<T>& arr, const T& key);

template <typename T>
bool cautareBinara(const vector<T>& arr, const T& key);

template <typename T>
void sortareBule(vector<T>& arr);

// sortarea inversa alfabetica a tablourilor de caractere
template <>
void sortareBule(vector<string>& arr);

#endif // FUNCTII_SABLON_H
