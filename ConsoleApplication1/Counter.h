#ifndef COUNTER_H
#define COUNTER_H
using namespace std;

class SpecialCounter
{
public:
	SpecialCounter(int = 0, int = 255);
	void start(int);
	void stop(int);
	void stepInc(int = 1);
	void stepDec(int = 1);
	SpecialCounter &operator++(); //prefix increment operator
	SpecialCounter operator++(int); //postfix increment operator
	SpecialCounter &operator--();   //prefix decrement operator
	SpecialCounter operator--(int); //postfix decrement operator
	void helpIncrement();
	void helpDecrement();
	void print();

private:
	int startValue;
	int stopValue;
};
#endif