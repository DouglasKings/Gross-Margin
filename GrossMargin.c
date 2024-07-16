#include <stdio.h>

// Function prototype declarations
// These inform the compiler about the functions that will be defined later in the program.
double calculateRevenue(double salesServicesMade, double salesProductsMade);
double calculateGrossMargin(double revenue, double costOfGoodsSold);

int main() {
    // Variable declarations
    double salesServicesMade, salesProductsMade, revenue, costOfGoodsSold, grossMargin;

    // Prompting the user to enter sales services made
    printf("Enter the sales services made: ");
    scanf("%lf", &salesServicesMade);

    // Prompting the user to enter sales products made
    printf("Enter the sales products made: ");
    scanf("%lf", &salesProductsMade);

    // Prompting the user to enter the cost of goods sold
    printf("Enter the cost of goods sold: ");
    scanf("%lf", &costOfGoodsSold);

    // Calculating revenue based on sales services and products made
    revenue = calculateRevenue(salesServicesMade, salesProductsMade);
    // Calculating gross margin based on calculated revenue and cost of goods sold
    grossMargin = calculateGrossMargin(revenue, costOfGoodsSold);

    // Displaying the entered values
    printf("The sales services made is: %.2lf \n", salesServicesMade);
    printf("The sales products made is: %.2lf \n", salesProductsMade);
    printf("The cost of goods sold is: %.2lf \n", costOfGoodsSold);

    // Displaying the calculated gross margin
    printf("The Gross Margin is: %.2f%% \n", grossMargin);

    return 0;
}

// Function definition for calculating revenue
// This function takes the sales services made and sales products made as inputs,
// and returns the total revenue generated from both.
double calculateRevenue(double salesServicesMade, double salesProductsMade) {
    return salesServicesMade + salesProductsMade;
}

// Function definition for calculating gross margin
// This function calculates the gross margin percentage by subtracting the cost of goods sold
// from the revenue and dividing the result by the revenue, then multiplying by 100 to get a percentage.
double calculateGrossMargin(double revenue, double costOfGoodsSold) {
    return (revenue - costOfGoodsSold) / revenue * 100;
}
