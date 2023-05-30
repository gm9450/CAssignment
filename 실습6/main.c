#include<stdio.h>

typedef struct {
	char item[50];
	int dollar;
	int cent;
}Money;

int moneyConversion1(Money m)
{
	int money = m.dollar * 100 + m.cent;
	return money;
}

void moneyConversion2(Money * m, int money)
{
	m->dollar = money / 100;
	m->cent = money % 100;
}

Money moneyAdd(Money m1, Money m2)
{
	int money = moneyConversion1(m1) + moneyConversion1(m2);
	Money mA = {"합"};
	moneyConversion2(&mA, money);
	return mA;
}

Money moneySubtract(Money m1, Money m2)
{
	Money mS = { "차이"};
	int money;
	if (moneyConversion1(m1) >= moneyConversion1(m2)) money = moneyConversion1(m1) - moneyConversion1(m2);
	else money = moneyConversion1(m2) - moneyConversion1(m1);
	moneyConversion2(&mS, money);
	return mS;
}

void moneySwap(Money* m1, Money* m2)
{
	int dollar = m1->dollar;
	int cent = m1->cent;
	m1->dollar = m2->dollar;
	m1->cent = m2->cent;
	m2->dollar = dollar;
	m2->cent = cent;
}

void printMoney(Money m) {
	printf("%s은(는) %d달러 %d센트입니다.\n", m.item, m.dollar, m.cent);
}

int main()
{
	Money m1 = { "Fork",15,99 };
	Money m2 = { "Beef",20,98 };
	printMoney(m1);
	printMoney(m2);
	printMoney(moneyAdd(m1, m2));
	printMoney(moneySubtract(m1, m2));
	moneySwap(&m1, &m2);
	printf("swap 수행 결과:\n");
	printMoney(m1);
	printMoney(m2);
	return 0;
}