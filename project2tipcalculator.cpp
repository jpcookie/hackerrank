#include <bits/stdc++.h>

using namespace std;

int main() {
    double meal_cost; // cost of the meal prior to any closing costs,
    cin >> meal_cost; // take meal cost in from stdin
    int tip_percent; // tip percentage defined as integer
    cin >> tip_percent; //take tip percentage whole number as stdin
    double DecimalTipPercentage;
    DecimalTipPercentage = (double)tip_percent / 100; // this line is important since it has to get the new data type defined as a double or the changed value
							// will just default to the old type and not auto-convert like python.
	std::cout << "The Converted DecimalTipPercentage variable is " << DecimalTipPercentage << endl;
    double SubTotalTipAmount;
    SubTotalTipAmount = DecimalTipPercentage * meal_cost;
    int tax_percent;
    double DecimalTaxAmount;
    cin >> tax_percent;
    DecimalTaxAmount = (double)tax_percent / 100; // here is the type conversion for the c++ entry for int to double here
    double SubTotalTaxAmount;
    SubTotalTaxAmount = meal_cost * DecimalTaxAmount;
    double TaxMealSubTotal;
    TaxMealSubTotal = meal_cost + SubTotalTaxAmount;
    double TotalMealCost;
    TotalMealCost = TaxMealSubTotal + SubTotalTipAmount; // calculation for double type for all costs in meal. Will have to use round down in order to get the expected output 
							// for the test case 
    std::cout << "The total meal cost is " << round(TotalMealCost) << " dollars" << endl; // checking to see if "round()" will work in stdout
	// yes! it works on testing with the test case 12 20 8
    return 0;
}
