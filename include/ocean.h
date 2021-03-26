// Copyright 2021 Egor Buzanov
#ifndef INCLUDE_OCEAN_H_
#define INCLUDE_OCEAN_H_

#include <iostream>
#include <list>
#include <random>

#include "../include/cell.h"
#include "../include/common.h"
#include "../include/object.h"
#include "../include/predator.h"
#include "../include/prey.h"
#include "../include/stone.h"

class Cell;
class Object;
class Stone;

class Ocean {
 private:
  Cell **cells;
  std::list<Object *> objects;
  unsigned int M;
  unsigned int N;

 public:
  Ocean(unsigned int _M, unsigned int _N);
  ~Ocean();
  void print() const;
  void AddObject(Object *);
  void run();
  void deleteObject(Object *);
  void objectStep(Cell *);
};

#endif  // INCLUDE_OCEAN_H_
