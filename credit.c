#include <cs50.h>
#include <stdio.h>


int count_digits(long long number);
bool validate_checksum(long long number);
string get_card_brand(long long number);

int main(void)
{
    // Prompt for credi card number
    long long number = get_long_long("Number: ");

    // Validate checksum
    bool is_valid = validate_checksum(number);

    // Get card brand
    string brand = get_card_brand(number);

    //print card brand or "INVALID"
    if (is_valid)
    {
        printf("%s\n", brand);
    }
    else
    {
        printf("INVALID\n");
    }

}

//Function to count the number of digits in a number
int count_digits(long long number)
{
    int count = 0;
    while (number != 0)
    {
        number /= 10;
        count++;
    }
    return count;
}

//Function to validate the checksum of a credit card number
bool validate_checksum(long long number)
{
    int sum = 0;
    int digits_count = count_digits(number);
    bool multiply = false;

    while (number != 0)
    {
        int digit = number % 10;

        if (multiply)
        {
            digit *= 2;
            sum += digit / 10 + digit % 10;
        }
        else
        {
            sum += digit;
        }

        number /= 10;
        multiply = !multiply;

    }
    return sum % 10 == 0;
}

// Function to get the brand of a credit card number
string get_card_brand(long long number)
{
    int digits_count = count_digits(number);

    //American Express
    if (digits_count == 15 && (number / 10000000000000 == 34 || number / 10000000000000 == 37))

    {
        return "AMEX";
    }
    //Mastercard
    else if (digits_count == 16 && number / 100000000000000 >= 51 && number / 100000000000000 <= 55)
    {
        return "MASTERCARD";
    }
    //Visa
    else if ((digits_count == 13 || digits_count == 16) && number / 1000000000000000 == 4)
    {
        return "VISA";
    }
    //Invalid
    else
    {
        return "INVALID";
    }

}
