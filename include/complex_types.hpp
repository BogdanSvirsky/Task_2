#include "../include/basic_types.hpp"
#include "../include/enums.hpp"

typedef struct {
    Number id;
    AccountType type;
    MonetaryUnit balance;
    Currency currency;
} Account;

using InterestRate = Float;

Float getYearRatio(InterestRate);

Float getHalfYearRatio(Float);

Float getQuarterRatio(Float);

Float getMonthRatio(Float);

Float getDayRatio(Float);

typedef struct {
    Number id;
    InterestRate interestRate;
    DepositType type;
    Date creationDate;
    Number expirationPeriod;
} Deposit;

typedef struct {
    Number id;
    InterestRate interestRate;
    MonetaryUnit loanAmount;
    CreditType type;
} Credit;

typedef struct {
    Number id;
    String name;
    ClientType type;
} Client;

typedef struct {
    Number clientId, accountId, depositId;
} ClientAccount;

typedef struct {
    Number id;
} PersonalBankAccount;

typedef struct {
    Number clientId, accountId, creditId;
} ClientObligation;

typedef struct {
    WorkplaceType type;
    Number searsCount;
} Workplace;

typedef struct {
    Currency currencyForSell;
    Currency currencyForBuy;
    Float exchangeRatio;
} ExchangeRate;