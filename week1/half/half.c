#include <cs50.h>
#include <stdio.h>

float half(float bill, float tax, float tip);

int main(void)
{
    float bill_amount = get_float("Bill before tax and tip: ");
    float tax_percent = get_float("Sale Tax Percent: ");
    int tip_percent = get_int("Tip percent: ");

    printf("You will owe $%.2f each!\n", half(bill_amount, tax_percent, tip_percent));
}

// TODO: Complete the function
float half(float bill, float tax, float tip)
{
    float bill_after_tax = bill * (tax / 100.0) + bill;
    float tip_amount = bill_after_tax * (tip / 100.0);
    float split = (bill_after_tax + tip_amount) / 2;
    return split;
}

