// Copyright 2021 Egor Buzanov
#ifndef INCLUDE_PREDATOR_H_
#define INCLUDE_PREDATOR_H_

#include "prey.h"

class Predator : public Prey {
 protected:
  unsigned int feed_num;

 public:
  Predator(Cell *_cell = nullptr) : Prey(_cell) { feed_num = lifetime % 5; }
  void live() override;
};

#endif  // INCLUDE_PREDATOR_H_