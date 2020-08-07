#include <QCoreApplication>

#include <iostream>
#include <vector>

#include "CustomOperators.h"

#define show(x)                                                                \
  std::cout << ">> " << #x << " :\n\t";                                        \
  print(x);
template <typename T> void print(const std::vector<T> &a) {
  std::copy(a.begin(), a.end(), std::ostream_iterator<T>(std::cout, ", "));
  std::cout << std::endl;
}
template <typename T> void print(const T &a) { std::cout << a << std::endl; }

///////////////////////////////////////////////////////

int main(int argc, char *argv[]) {
  QCoreApplication app(argc, argv);
  std::vector<int> a{1, 2, 3};
  std::vector<std::complex<float>> b{0.5, 0.5, 0.5};
  //  std::vector<int> c{1, 2, 3};
  show(a);
  show(b);
  show(a * b);
  show(a *= a);
  show(a *= 2);
  show(a[1]);
  return app.exec();
}
