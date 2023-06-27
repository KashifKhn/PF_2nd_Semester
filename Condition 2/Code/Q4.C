#include <stdio.h>
#include <math.h>

int main(void) {
  float x, y, r, theta;
  printf("Enter the Cartesian coordinates of the point (x, y): ");
  scanf("%f %f", &x, &y);
  r = sqrt(pow(x, 2) + pow(y, 2));
  theta = atan2(y, x) * (180 / M_PI);
  printf("The polar coordinates of the point are: (%f, %f)", r, theta);

    return 0;
}
