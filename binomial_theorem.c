#include <stdio.h>
#include <math.h>


unsigned int factorial(unsigned int n)
{
    unsigned value = 1;
    for (int i = 1; i <= n; i++)
    {
        value *= i;
    }
    return value;
    
}

int binomial(unsigned int a, unsigned int b, unsigned int n)
{
    //where n is the coefficient, form (a+b)^n
    if (n == 0)
    {
        return 1;
    }

    unsigned int a_coeff = 0;
    unsigned int b_coeff = 0;
    unsigned int total = 0;
    //char biomial_equation[];
    unsigned int ncr = 0;
    int count = 0;
    while (count<=n)
    {
        //imma make the pair first
        a_coeff = n - count;
        b_coeff = count;
        ncr = (factorial(n)/(factorial(count)*(factorial(n-count))));
        printf("%da^%db^%d\n",ncr,a_coeff,b_coeff);
        total = total + (ncr*pow(a,a_coeff)*pow(b,b_coeff));
        count++;
    }
    
    
    return total;


}



int main()
{
    printf("Binomial Value: %d",binomial(5,8,8));
    return 0;
}