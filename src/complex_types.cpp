#include "../include/complex_types.hpp"

Float getYearRatio(Float interestRate) { return 1 + interestRate / 100; }

Float getHalfYearRatio(Float yearRatio) {
  Number integerPart = (Number)yearRatio;
  Float floatPart = yearRatio - integerPart;
  return integerPart + floatPart / 2;
}

Float getQuarterRatio(Float yearRatio) {
  Number integerPart = (Number)yearRatio;
  Float floatPart = yearRatio - integerPart;
  return integerPart + floatPart / 4;
}

Float getMonthRatio(Float yearRatio) {
  Number integerPart = (Number)yearRatio;
  Float floatPart = yearRatio - integerPart;
  return integerPart + floatPart / 12;
}

Float getDayRatio(Float yearRatio) {
  Number integerPart = (Number)yearRatio;
  Float floatPart = yearRatio - integerPart;
  return integerPart + floatPart / 365;
}