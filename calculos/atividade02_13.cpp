#include <iostream>
#include <string>
using namespace std;
/*
Faça um programa que converta uma temperatura em Celsius para
Fahrenheit.
*/

int main() {
  float celsius, fahrenheit;
  cout << "Digite a temperatura em celsius: ";
  cin >> celsius;
  fahrenheit = ((9.0 / 5.0) * celsius) + 32.0;
  cout << "A temperatura em fahrenheit e de: " << fahrenheit;

  return 0;
}