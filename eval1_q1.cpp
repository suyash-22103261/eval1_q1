#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int degree;
    cout << "Enter the degree of the polynomial: ";
    cin >> degree;

    if (degree > 5)
    {
        cout<<"Degree is greater than 5 ";
    }
    else
    {
        vector<int> coefficients(degree + 1);
        cout << "Enter the coefficients of the polynomial\nStarting from the highest degree term\n\n";
        for (int i = degree; i >= 0; --i)
        {
            cout<<"Enter the term with degree "<<i<<" : ";
            cin >> coefficients[i];
        }

        vector<int> derivativeCoefficients(degree);
        for (int i = degree; i > 0; --i)
        {
            derivativeCoefficients[i - 1] = coefficients[i] * i;
        }

        cout << "The derivative of the polynomial (with 0 co-efficient): ";
        for (int i = degree - 1; i >= 0; --i)
        {
            cout << derivativeCoefficients[i] << "x^" << i;
            if (i > 0)
            {
                cout << " + ";
            }
        }

        cout << "\n\nThe derivative of the polynomial (without 0 co-efficient): ";
        for (int i = degree - 1; i >= 0; --i)
        {
            if(derivativeCoefficients[i]!=0)
            {
               cout << derivativeCoefficients[i] << "x^" << i;
            if (i > 0)
            {
                cout << " + ";
            }
            }
        }
        cout << endl;
    }


    return 0;
}
