#include <stdio.h>

struct Complex {
    float real;
    float imaginary;
};

struct Complex readComplex() {
    struct Complex num;
    printf("Enter real part: ");
    scanf("%f", &num.real);
    printf("Enter imaginary part: ");
    scanf("%f", &num.imaginary);
    return num;
}

void writeComplex(struct Complex num) {
    printf("%.2f + %.2fi\n", num.real, num.imaginary);
}

struct Complex addComplex(struct Complex num1, struct Complex num2) {
    struct Complex result;
    result.real = num1.real + num2.real;
    result.imaginary = num1.imaginary + num2.imaginary;
    return result;
}

struct Complex subtractComplex(struct Complex num1, struct Complex num2) {
    struct Complex result;
    result.real = num1.real - num2.real;
    result.imaginary = num1.imaginary - num2.imaginary;
    return result;
}

int main() {
    struct Complex num1, num2, sum, difference;

    printf("Enter first complex number:\n");
    num1 = readComplex();

    printf("Enter second complex number:\n");
    num2 = readComplex();

    sum = addComplex(num1, num2);
    difference = subtractComplex(num1, num2);

    printf("First complex number: ");
    writeComplex(num1);
    printf("Second complex number: ");
    writeComplex(num2);
    printf("Sum: ");
    writeComplex(sum);
    printf("Difference: ");
    writeComplex(difference);

    return 0;
}