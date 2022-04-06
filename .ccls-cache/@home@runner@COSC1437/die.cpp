#include <stdlib.h>
#include <ctime>
#include "die.h"

Die::Die(int sides)
{
  _sides = sides;
  _num = 1;
  srand(time(0));
}

void Die::roll()
{
  _num = rand() % _sides + 1;
}

int Die::getNum() const
{
  return _num;
}