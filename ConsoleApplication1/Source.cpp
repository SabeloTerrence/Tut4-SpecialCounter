#include <iostream>
#include "Counter.h"
using namespace std;

SpecialCounter::SpecialCounter(int x, int y)
{
	start(x);
	stop(y);
}
void SpecialCounter::start(int start){
	startValue = start;
}
void SpecialCounter::stop(int stop){
	stopValue = stop;
}
void SpecialCounter::stepInc(int incVal)
{
	startValue = startValue + incVal;
}
void SpecialCounter::stepDec(int decVal){
	startValue = startValue - decVal;
}
SpecialCounter &SpecialCounter::operator++(){
	helpIncrement();
	return *this;
}
SpecialCounter SpecialCounter::operator++(int){
	SpecialCounter tmp = *this;
	helpIncrement();

	return tmp;
}
SpecialCounter &SpecialCounter::operator--(){
	helpDecrement();
	return *this;
}
SpecialCounter SpecialCounter::operator--(int){
	SpecialCounter tmp = *this;
	helpDecrement();
	return tmp;
}
void SpecialCounter::helpIncrement()
{
	if (startValue != stopValue){
		startValue++;
	}
}
void SpecialCounter::helpDecrement()
{
	if (startValue != 0){
		startValue--;
	}
}
void SpecialCounter::print(){
	cout << startValue << endl;
}