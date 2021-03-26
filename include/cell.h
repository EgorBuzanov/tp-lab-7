// Copyright 2021 Egor Buzanov
#ifndef INCLUDE_CELL_H_
#define INCLUDE_CELL_H_

#include "common.h"
#include "object.h"

class Ocean;

class Cell {
  friend Ocean;

 private:
  Pair crd;
  Object *obj;
  Ocean *ocean;

 public:
  explicit Cell(Pair _p = {0, 0}, Object *_obj = nullptr,
                Ocean *_ocean = nullptr)
      : crd(_p), obj(_obj), ocean(_ocean) {}
  Object *getObject() const;
  void setObject(Object *);
};

#endif  // INCLUDE_CELL_H_
