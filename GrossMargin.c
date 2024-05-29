#include <stdio.h>

// Function prototypes that informs the compiler about the functions that will be used later in the program.
double calculateRevenue(double salesServicesMade, double salesProductsMade);
double calculateGrossMargin(double Revenue, double costOfGoodsSold);

int main(){

    double salesServicesMade, salesProductsMade, Revenue, costOfGoodsSold, grossMargin;

    printf("Enter the sales services made: ");
    scanf("%lf", &salesServicesMade);

    printf("Enter the sales products made: ");
    scanf("%lf", &salesProductsMade);

    printf("Enter the cost of goods sold: ");
    scanf("%lf", &costOfGoodsSold);

    Revenue = calculateRevenue(salesServicesMade, salesProductsMade);
    grossMargin = calculateGrossMargin(Revenue, costOfGoodsSold);

    printf("The sales services made is: %.2lf \n", salesServicesMade);
   
    printf("The sales products made is: %.2lf \n", salesProductsMade);
    
    printf("The cost of goods sold is: %.2lf \n", costOfGoodsSold);

    printf("The Gross Margin is: %.2f%% \n", grossMargin);

    return 0;
}

double calculateRevenue(double salesServicesMade, double salesProductsMade){
    return salesServicesMade + salesProductsMade;
}
double calculateGrossMargin(double Revenue, double costOfGoodsSold){
    return (Revenue - costOfGoodsSold) / Revenue * 100;
}