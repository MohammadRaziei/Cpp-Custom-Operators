#ifndef CUSTOMOPERATORS_H
#define CUSTOMOPERATORS_H

#include <complex>
#include <stdexcept>
#include <type_traits>
#include <vector>

#define _lengthError(x1, x2)                                                   \
  if (x1.size() != x2.size())                                                  \
    throw std::length_error("not match size");

//////// operator +

template <class T1, class T2>
inline std::complex<typename std::common_type<T1, T2>::type>
operator+(const std::complex<T1> &a, T2 b) {
  typedef typename std::common_type<T1, T2>::type T;
  return static_cast<std::complex<T>>(a) + static_cast<std::complex<T>>(b);
}

template <class T1, class T2>
inline std::complex<typename std::common_type<T1, T2>::type>
operator+(T1 a, const std::complex<T2> &b) {
  typedef typename std::common_type<T1, T2>::type T;
  return static_cast<std::complex<T>>(a) + static_cast<std::complex<T>>(b);
}

template <class T1, class T2>
inline std::vector<typename std::common_type<T1, T2>::type>
operator+(const std::vector<T1> &a, const std::vector<T2> &b) {
  typedef typename std::common_type<T1, T2>::type T;
  _lengthError(a, b);
  size_t vecSize = a.size();
  std::vector<T> v(vecSize);
  for (size_t i = 0; i < vecSize; ++i)
    v[i] = a[i] + b[i];
  return v;
}

template <class T1, class T2>
inline std::vector<typename std::common_type<T1, T2>::type>
operator+(const std::vector<T1> &a, const T2 &b) {
  typedef typename std::common_type<T1, T2>::type T;
  size_t vecSize = a.size();
  T bb = static_cast<T>(b);
  std::vector<T> v(vecSize);
  for (size_t i = 0; i < vecSize; ++i)
    v[i] = a[i] + bb;
  return v;
}

template <class T1, class T2>
inline std::vector<typename std::common_type<T1, T2>::type>
operator+(const T2 &b, const std::vector<T1> &a) {
  typedef typename std::common_type<T1, T2>::type T;
  size_t vecSize = a.size();
  T bb = static_cast<T>(b);
  std::vector<T> v(vecSize);
  for (size_t i = 0; i < vecSize; ++i)
    v[i] = bb + a[i];
  return v;
}

template <class T>
inline std::vector<T> &operator+=(std::vector<T> &a, const T &b) {
  size_t vecSize = a.size();
  for (size_t i = 0; i < vecSize; ++i)
    a[i] += b;
  return a;
}

//////// operator -

template <class T1, class T2>
inline std::complex<typename std::common_type<T1, T2>::type>
operator-(std::complex<T1> a, T2 b) {
  typedef typename std::common_type<T1, T2>::type T;
  return static_cast<std::complex<T>>(a) - static_cast<std::complex<T>>(b);
}

template <class T1, class T2>
inline std::complex<typename std::common_type<T1, T2>::type>
operator-(T1 a, std::complex<T2> b) {
  typedef typename std::common_type<T1, T2>::type T;
  return static_cast<std::complex<T>>(a) - static_cast<std::complex<T>>(b);
}

template <class T1, class T2>
inline std::vector<typename std::common_type<T1, T2>::type>
operator-(const std::vector<T1> &a, const std::vector<T2> &b) {
  typedef typename std::common_type<T1, T2>::type T;
  _lengthError(a, b);
  size_t vecSize = a.size();
  std::vector<T> v(vecSize);
  for (size_t i = 0; i < vecSize; ++i)
    v[i] = a[i] - b[i];
  return v;
}

template <class T1, class T2>
inline std::vector<typename std::common_type<T1, T2>::type>
operator-(const std::vector<T1> &a, const T2 &b) {
  typedef typename std::common_type<T1, T2>::type T;
  size_t vecSize = a.size();
  T bb = static_cast<T>(b);
  std::vector<T> v(vecSize);
  for (size_t i = 0; i < vecSize; ++i)
    v[i] = a[i] - bb;
  return v;
}

template <class T1, class T2>
inline std::vector<typename std::common_type<T1, T2>::type>
operator-(const T2 &b, const std::vector<T1> &a) {
  typedef typename std::common_type<T1, T2>::type T;
  size_t vecSize = a.size();
  T bb = static_cast<T>(b);
  std::vector<T> v(vecSize);
  for (size_t i = 0; i < vecSize; ++i)
    v[i] = bb - a[i];
  return v;
}

template <class T>
inline std::vector<T> &operator-=(std::vector<T> &a, const T &b) {
  size_t vecSize = a.size();
  for (size_t i = 0; i < vecSize; ++i)
    a[i] -= b;
  return a;
}

//////// operator *

template <class T1, class T2>
inline std::complex<typename std::common_type<T1, T2>::type>
operator*(const std::complex<T1> &a, T2 b) {
  typedef typename std::common_type<T1, T2>::type T;
  return static_cast<std::complex<T>>(a) * static_cast<std::complex<T>>(b);
}

template <class T1, class T2>
inline std::complex<typename std::common_type<T1, T2>::type>
operator*(T1 a, const std::complex<T2> &b) {
  typedef typename std::common_type<T1, T2>::type T;

  return static_cast<std::complex<T>>(a) * static_cast<std::complex<T>>(b);
}

template <class T1, class T2>
inline std::vector<typename std::common_type<T1, T2>::type>
operator*(const std::vector<T1> &a, const std::vector<T2> &b) {
  typedef typename std::common_type<T1, T2>::type T;
  _lengthError(a, b);
  size_t vecSize = a.size();
  std::vector<T> v(vecSize);
  for (size_t i = 0; i < vecSize; ++i)
    v[i] = a[i] * b[i];
  return v;
}

template <class T1, class T2>
inline std::vector<typename std::common_type<T1, T2>::type>
operator*(const std::vector<T1> &a, const T2 &b) {
  typedef typename std::common_type<T1, T2>::type T;
  size_t vecSize = a.size();
  T bb = static_cast<T>(b);
  std::vector<T> v(vecSize);
  for (size_t i = 0; i < vecSize; ++i)
    v[i] = a[i] * bb;
  return v;
}

template <class T1, class T2>
inline std::vector<typename std::common_type<T1, T2>::type>
operator*(const T2 &b, const std::vector<T1> &a) {
  typedef typename std::common_type<T1, T2>::type T;
  size_t vecSize = a.size();
  T bb = static_cast<T>(b);
  std::vector<T> v(vecSize);
  for (size_t i = 0; i < vecSize; ++i)
    v[i] = bb * a[i];
  return v;
}

template <class T>
inline std::vector<T> &operator*=(std::vector<T> &a, const T &b) {
  size_t vecSize = a.size();
  for (size_t i = 0; i < vecSize; ++i)
    a[i] *= b;
  return a;
}

//////// operator /

template <class T1, class T2>
inline std::complex<typename std::common_type<T1, T2>::type>
operator/(const std::complex<T1> &a, T2 b) {
  typedef typename std::common_type<T1, T2>::type T;
  return static_cast<std::complex<T>>(a) / static_cast<std::complex<T>>(b);
}

template <class T1, class T2>
inline std::complex<typename std::common_type<T1, T2>::type>
operator/(T1 a, const std::complex<T2> &b) {
  typedef typename std::common_type<T1, T2>::type T;
  return static_cast<std::complex<T>>(a) / static_cast<std::complex<T>>(b);
}

template <class T1, class T2>
inline std::vector<typename std::common_type<T1, T2>::type>
operator/(const std::vector<T1> &a, const std::vector<T2> &b) {
  typedef typename std::common_type<T1, T2>::type T;
  _lengthError(a, b);
  size_t vecSize = a.size();
  std::vector<T> v(vecSize);
  for (size_t i = 0; i < vecSize; ++i)
    v[i] = a[i] / b[i];
  return v;
}

template <class T1, class T2>
inline std::vector<typename std::common_type<T1, T2>::type>
operator/(const std::vector<T1> &a, const T2 &b) {
  typedef typename std::common_type<T1, T2>::type T;
  size_t vecSize = a.size();
  T bb = static_cast<T>(b);
  std::vector<T> v(vecSize);
  for (size_t i = 0; i < vecSize; ++i)
    v[i] = a[i] / bb;
  return v;
}

template <class T1, class T2>
inline std::vector<typename std::common_type<T1, T2>::type>
operator/(const T2 &b, const std::vector<T1> &a) {
  typedef typename std::common_type<T1, T2>::type T;
  size_t vecSize = a.size();
  T bb = static_cast<T>(b);
  std::vector<T> v(vecSize);
  for (size_t i = 0; i < vecSize; ++i)
    v[i] = bb / a[i];
  return v;
}

template <class T>
inline std::vector<T> &operator/=(std::vector<T> &a, const T &b) {
  size_t vecSize = a.size();
  for (size_t i = 0; i < vecSize; ++i)
    a[i] /= b;
  return a;
}

#endif // CUSTOMOPERATORS_H
