#include <QCoreApplication>

#include <algorithm>
#include <iostream>
#include <string>
#include <typeinfo>
#include <vector>

#include "CustomOperators.h"

#define show(x)                                                                \
  std::cout << ">> " << #x << " :   \n\t[TYPE] " << typeName(x) << "\n\t";     \
  print(x);                                                                    \
  std::cout << std::endl;

template <typename T> std::string typeName(const T &v) {
  std::string typeStr = typeid(v).name();
  std::string alloc = ",class std::allocator<";
  std::size_t found = typeStr.find(alloc);
  if (found != std::string::npos)
    typeStr = typeStr.substr(0, found) + ">";
  size_t pos = std::string::npos;
  std::string classStr = "class ";
  // Search for the substring in string in a loop untill nothing is found
  while ((pos = typeStr.find(classStr)) != std::string::npos) {
    typeStr.erase(pos, classStr.length());
  }
  return typeStr;
}

template <typename T> void print(const std::vector<T> &a) {
  std::copy(a.begin(), a.end(), std::ostream_iterator<T>(std::cout, ", "));
  std::cout << "\b\b " << std::endl;
}
template <typename T> void print(const T &a) { std::cout << a << std::endl; }

///////////////////////////////////////////////////////

int main(int argc, char *argv[]) {
  QCoreApplication app(argc, argv);
  std::vector<int> vectInt{1, 2, 3};
  std::vector<float> vectFloat{0.5, 1.5, -0.5};
  std::vector<float> vectDouble{0.5, 7.5, 9.5};
  std::vector<std::complex<float>> vectCompFloat{{0.5, 1}, {1.5, 2}, {-0.5, 3}};

  show(vectInt);
  show(vectFloat);
  show(vectCompFloat);
  show(vectDouble);
  show(vectInt + vectCompFloat);
  show(vectFloat / vectCompFloat);
  show(vectDouble - 0.5);
  show(vectInt *= vectInt);
  show(vectInt *= 2);
  show(vectInt[1]);
  return app.exec();
}
