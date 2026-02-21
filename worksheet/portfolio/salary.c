
#include <stdio.h>

/*
 * Potrfolio submission
 * Name:JiaHe Zhu
 * ID:201958718
 */

 int main( void ) {

   double salary = 36250.0;
   double ni_rate_percent = 8.0;
   double tax_rate_percent = 15.0;

   double tax_free_allowance = 12500.0;
   double ni_rate = ni_rate_percent / 100.0;
   double tax_rate = tax_rate_percent / 100.0;

   double ni_contribution = salary * ni_rate;
   double salary_after_ni = salary - ni_contribution;
   double taxable_amount = salary_after_ni - tax_free_allowance;

   if (taxable_amount < 0.0) {
      taxable_amount = 0.0;
   }

   double tax_contribution = taxable_amount * tax_rate;
   double take_home_salary = salary_after_ni - tax_contribution;

   printf("Salary £%.2f\n",salary);
   printf("NI contribution £%.2f\n",ni_contribution);
   printf("Tax contribution £%.2f\n",tax_contribution);
   printf("Take home salary £%.2f\n",take_home_salary);

    return 0;
 }