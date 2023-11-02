// Q.3. Mr. X goes to market for buying some fruits and vegetables. He is having a
// currency of Rs 500 with him for marketing. From a shop, he purchases 2.0 kg
// Apple priced Rs. 50.0 per kg, 1.5 kg Mango priced Rs.35.0 per kg, 2.5 kg
// Potato priced Rs.10.0 per kg, and 1.0 kg Tomato priced Rs.15 per kg.
// He gives the currency of Rs. 500 to the shopkeeper. Find out the amount
// shopkeeper will return to X by writing a C program.

#include <stdio.h>
int main(){

    float moneyInHisWallet = 500, totalPriceToBePaid, amountReturnByShopkeeper;
    float priceOfApplePerKg = 50.0, priceOfMangoPerKg = 35.0, priceOfPotatoPerKg = 10.0,
          priceOfTomatoPerKg = 15;
    
    float totalPriceOfApple = priceOfApplePerKg * 2.0, totalPriceOfMango = priceOfMangoPerKg * 1.5,
          totalPriceOfPotato = priceOfPotatoPerKg * 2.5, totalPriceOfTomato = priceOfTomatoPerKg * 1.0;

          totalPriceToBePaid = totalPriceOfApple + totalPriceOfMango + totalPriceOfPotato + totalPriceOfTomato;
          amountReturnByShopkeeper = moneyInHisWallet - totalPriceToBePaid;
    
    printf("The amount to be returned to Mr. X is: %.2f\n", amountReturnByShopkeeper);

    return 0;
}