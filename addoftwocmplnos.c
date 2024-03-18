#include <stdio.h>


struct compno
{
    float real;
    float imaginary;
};

struct compno addno(struct compno num1, struct compno num2) {
    struct compno result;

    result.real = num1.real + num2.real;
    result.imaginary = num1.imaginary + num2.imaginary;

    return result;
}

int main() {
    struct compno num1, num2, sum;


    printf("Enter real and imaginary parts of the first complex number:\n");
    scanf("%f %f", &num1.real, &num1.imaginary);


    printf("Enter real and imaginary parts of the second complex number:\n");
    scanf("%f %f", &num2.real, &num2.imaginary);


    sum = addno(num1, num2);


    printf("Sum: %.2f + %.2fi\n", sum.real, sum.imaginary);

    return 0;
}
