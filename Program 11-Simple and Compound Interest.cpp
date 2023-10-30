#include <stdio.h>
#include <math.h>
int main() {

  // Declare variables
  float principle, rate, time, si, ci;

  // Get user input
  printf("Enter the principal amount: ");
  scanf("%f", &principle);
  printf("Enter the rate of interest: ");
  scanf("%f", &rate);
  printf("Enter the time in years: ");
  scanf("%f", &time);

  // Calculate simple interest
  si = (principle * rate * time) / 100;

  // Calculate compound interest
  ci = principle * (pow((1 + rate / 100), time)) - principle;

  // Print the results
  printf("Simple interest: %f\n", si);
  printf("Compound interest: %f\n", ci);

  return 0;
}
