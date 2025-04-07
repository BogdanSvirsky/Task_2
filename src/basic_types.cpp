#include "../include/basic_types.hpp"

MonetaryUnit round(MonetaryUnit value) {
  return (((long long int)(value * 10000) + 5 * (value < 0.0 ? -1 : 1)) / 10) /
         1000.0;
}