using Number = unsigned long long;

using Float = double;

typedef struct {
  Number hours, minutes;
} Time;

using Date = Number;

using MonetaryUnit = double;

MonetaryUnit round(MonetaryUnit value);

using String = char[100];