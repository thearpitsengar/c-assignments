// Q10. The population of a city is 30000. It increases by 20 % during first year
// and 30% during the second year. Write a program to find the population after
// two years?

#include <stdio.h>
int main(){
    
    long int cityPopulation = 30000, totalPopulationAfterOneYear, totalPopulationAfterTwoYear;
    int increaseInFirstYearPopulation = 20 * cityPopulation/100;
    totalPopulationAfterOneYear = cityPopulation + increaseInFirstYearPopulation;
    int increaseInSecondYearPopulation = 30 * totalPopulationAfterOneYear/100;
    totalPopulationAfterTwoYear = totalPopulationAfterOneYear + increaseInSecondYearPopulation;

    printf("Total Population after two years will be: %ld\n", totalPopulationAfterTwoYear);
    
    return 0;
}
