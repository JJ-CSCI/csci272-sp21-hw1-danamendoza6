#include <iostream>
#include "binomial.h"

using namespace std;

Binomial::Binomial(float coefficient, int power) : coefficient(coefficient), power(power)
{
  if(power < 1)
  power = 1;
}

float Binomial:: GetCoefficient(int index)
{
  if(index == 1)
  return coefficient1;
  else if (index ==2)
  return coefficient2;
  else return -1;
}

int Binomial:: GetPower(int index)
{
  if(index ==1)
return power1;
else if(index == 2)
return power2;
else return -1;
}

void Binomial:: SetPower(int power, int index)
{
  if (power >= 1) {
  power= power; }
  else {
  power = 1;
  }
  if (index ==1)
  power= power;
  else if (index ==2)
  power= power;
  
}
void Binomial:: Add(const Binomial & object)
{
  if (power != object.power)
  cout << -1;
  else 
  coefficient += object.coefficient;
  
}

void Binomial:: Multiply(float object)
{
coefficient *= object;
}

void Binomial:: Multiply(float coefficient, int power)
{
  coefficient *= coefficient;
  power += power; 
}