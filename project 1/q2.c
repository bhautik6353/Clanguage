
#include <stdio.h>

int main() {
  int a;
  float bill = 0;

  printf("Enter electricity units: ");
  scanf("%d", &a);

  if (a <= 50) {
    bill = a * 0.50;
  } else if (a <= 150) {
    bill = 50 * 0.50;
    bill += (a - 50) * 0.75;
  } else if (a <= 250) {
    bill = 50 * 0.50;
    bill += 100 * 0.75;
    bill += (a - 150) * 1.20;
  } else {
    bill = 50 * 0.50;
    bill += 100 * 0.75;
    bill += 100 * 1.20;
    bill += (a - 250) * 1.50;
  }

  bill += bill * 0.20; 
  printf("Electricity Bill = Rs. %.2f\n", bill);

return 0;
}