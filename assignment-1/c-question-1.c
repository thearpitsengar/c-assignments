// Q.1. Write a C program for calculating the price of a product after
// adding the sales tax to its original price. Where rate of tax and
// price is inputted by user.

#include <stdio.h>
int main(){

    int rateOfTaxOfProduct, priceOfProduct, rateOfTax, finalPriceOfProductAfterTax;

    printf("Enter the product tax rate in integer digits only:");
    scanf("%d", &rateOfTaxOfProduct);
    printf("Enter the price of product in integer digits only:");
    scanf("%d", &priceOfProduct);
    //calculation of rate of tax here
    rateOfTax = priceOfProduct*rateOfTaxOfProduct/100;
    finalPriceOfProductAfterTax = priceOfProduct+rateOfTax;
    printf("Final price of Product after sales tax is: %d\n", finalPriceOfProductAfterTax);

    return 0;
}