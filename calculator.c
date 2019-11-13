
// Performs addition, subtraction, multiplication or division depending the input from user

# include <stdio.h>

int main(int argc, char *argv) {

    char operator;
    int firstNumb,secondNumb, result;

     if( argc != 4 )
     {
         printf("Invalid Argument\n");
         return -1;
     }

     firstNumb = atoi(argv[1]);
     secondNumb = atoi(argv[3]);



    switch(operator)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf",firstNumb, secondNumb, result);
            break;

        case '-':
            result = firstNumb - secondNumb;
            break;

        case '*':
            printf("%.1lf * %.1lf = %.1lf",firstNumb, secondNumb, firstNumb * secondNumb);
            break;

        case '/':
            printf("%.1lf / %.1lf = %.1lf",firstNumb, secondNumb, firstNumb / secondNumb);
            break;

        // If operator doesn't match any case constant (+, -, *, /)
        default:
            printf("Error! operator is not correct");
    }

    if(operator == '+' || operator == '-' || operator == '*' || operator == '/')
    {
        printf("Result: %d %c %d = %d\n",firstNumb, operator, secondNumb, result);
    }
    else
    {
        printf("Invalid Operator\n");
    } 

    return 0;
}

