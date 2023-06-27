#include <stdio.h>

int main(void) {
  int input, thousands, hundreds, tens, ones;
  printf("Enter a number between 1 and 3999: ");
  scanf("%d", &input);
  thousands = input / 1000;
  hundreds = (input % 1000) / 100;
  tens = (input % 100) / 10;
  ones = input % 10;
  printf("The Roman numeral representation of %d is: ", input);
  
  if (thousands == 1) {
    printf("M");
  } else if (thousands == 2) {
    printf("MM");
  } else if (thousands == 3) {
    printf("MMM");
  }
  if (hundreds == 1) {
    printf("C");
  } else if (hundreds == 2) {
    printf("CC");
  } else if (hundreds == 3) {
    printf("CCC");
  } else if (hundreds == 4) {
    printf("CD");
  } else if (hundreds == 5) {
    printf("D");
  } else if (hundreds == 6) {
    printf("DC");
  } else if (hundreds == 7) {
    printf("DCC");
  } else if (hundreds == 8) {
    printf("DCCC");
  } else if (hundreds == 9) {
    printf("CM");
  }
  if (tens == 1) {
    printf("X");
  } else if (tens == 2) {
    printf("XX");
  } else if (tens == 3) {
    printf("XXX");
  } else if (tens == 4) {
    printf("XL");
  } else if (tens == 5) {
    printf("L");
  } else if (tens == 6) {
    printf("LX");
  } else if (tens == 7) {
    printf("LXX");
  } else if (tens == 8) {
    printf("LXXX");
  } else if (tens == 9) {
    printf("XC");
  }
  if (ones == 1) {
    printf("I");
  } else if (ones == 2) {
    printf("II");
  } else if (ones == 3) {
    printf("III");
  } else if (ones == 4) {
    printf("IV");
  } else if (ones == 5) {
    printf("V");
  } else if (ones == 6) {
    printf("VI");
  } else if (ones == 7) {
    printf("VII");
  } else if (ones == 8) {
    printf("VIII");
  } else if (ones == 9) {
    printf("IX");
  }

    return 0;
}