#include <iostream>
using namespace std;

//Fun prototype
int sumTwoNumbers(int, int);
double areaOfCircle(double);
double circumferenceOfCircle(double);
double priceIncludingVAT(double, int);


//The main program
int main()
{
    int choice;

    do
    {
        cout << "\n1) Sum two numbers";
        cout << "\n2)Calculate area of a circle";
        cout << "\n3)Calculate circumference of a circle";
        cout << "\n4)Calculate price with VAT";
        cout << "\n5)Exit";
        cout << "\nEnter your choice:";
        cin >> choice;

        switch (choice)
        {
        case 1:
            int midterm, final;

            do
            {
                cout << "\nEnter midterm: ";
                cin >> midterm;
            } while (midterm < 0);

            do
            {
                cout << "\nEnter final: ";
                cin >> final;
            } while (final < 0);

            cout << "\nSum is: " << sumTwoNumbers(midterm, final);
            break;

        case 2:
            int radius;

            do {
                cout << "\nEnter the radius: ";
                cin >> radius;
            } while (radius < 0);

            cout << "\nArea of a circle is: " << areaOfCircle(radius);
            break;

        case 3:
            int radius1;

            do {
                cout << "\nEnter the radius: ";
                cin >> radius1;
            } while (radius1 < 0);

            cout << "\nCircumference of a circle is: " << circumferenceOfCircle(radius1);
            break;

        case 4:
            int price, VAT;

            do {
                cout << "\nEnter the price: ";
                cin >> price;
            } while (price < 0);

            do {
                cout << "\nEnter the VAT: ";
                cin >> VAT;
            } while (VAT < 0);

            cout << "\nPrice with VAT is: " << priceIncludingVAT(price, VAT);
            break;

        case 5:
            break;

        default:
            cerr << "\nWrong choice";
        }
    } while (choice != 5);

    return 0;
}

//Fun. to sum two numbers
int sumTwoNumbers(int midterm, int final)
{
    return midterm + final;
}

//Fun. to calculate area of a circle
double areaOfCircle(double radius)
{
    double pi = 3.14;
    return pi * radius * radius;
}

//Fun. to calculate circumference of a circle
double circumferenceOfCircle(double radius)
{
    double pi = 3.14;
    return pi * (radius + radius);
}

//Fun. to calculate price with VAT
double priceIncludingVAT(double price, int VAT)
{
    return price + (price * VAT / 100);
}
