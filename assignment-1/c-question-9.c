// Q9. Write a program to input and print your mobile number (i.e. of 10 digits).

#include <stdio.h>
int main(){
    
    long long int mobileNumber;
    printf("Enter your mobile number: ");
    scanf("%lld", &mobileNumber);
    
    if (mobileNumber < 1000000000 || mobileNumber > 9999999999){
       printf("Invalid mobile number. Please Enter Mobile Number of 10 digits.");
       return 1;
    }
    else{
       printf("Your mobile number is: %lld\n", mobileNumber);   
    }

    return 0;
}