#include <stdio.h>
#include "cs50.h"

float nemeh(float a, float b);
float hasah(float a, float b);
float urjih(float a, float b);
float huvaah(float a, float b);

int main(void)
{
    char operator;
    float operand1, operand2, result;

    while (true)
    {
        operand1 = get_float("ehnii toogoo oruulna uu : ");

        operator = get_char("temdegt ee oruulna uu (+, -, *, /, ): ");

        if (operator == 'q' || operator == 'Q')
        {
            printf("closing calculator bye!\n");
            break;
        }

        operand2 = get_float("2dahi toogoo oruulna uu: ");

        switch (operator)
        {
            case '+':
                result = nemeh(operand1, operand2);
                break;
            case '-':
                result = hasah(operand1, operand2);
                break;
            case '*':
                result = urjih(operand1, operand2);
                break;
            case '/':
                if (operand2 != 0)
                {
                    result = huvaah(operand1, operand2);
                }
                else
                {
                    printf("uuchlarai 0-iig huvaah bolomjgui, dahin oroldono uu.\n");
                    continue; 
                }
                break;
            default:
                printf("uuchlarai dung huleej avah bolojgui, dahin oroldono uu.\n");
                continue; 
        }

        printf("result: %.2f\n", result);
    }

    return 0;
}

float nemeh(float a, float b)
{
    return a + b;
}

float hasah(float a, float b)
{
    return a - b;
}

float urjih(float a, float b)
{
    return a * b;
}

float huvaah(float a, float b)
{
    return a / b;
}
