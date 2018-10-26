/************************************************************************************************
*                                                                                               *
* Do, James                                                                                     *
* 1133953                                                                                       *
* Program: Salary Raise Calculator                                                              *
*                                                                                               *
************************************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int main()
{   //Declaring all variables as floats
    float salary, rate, raise, newSalary, totalSalary = 0, totalRaise = 0, totalNewSalary = 0;


    puts("Please enter the yearly salary(s) then enter a negative amount to exit the program.\n");

    puts("\t\t\t\tSalary\t\tRate\t\tRaise\t\t\tNewSalary");
    //Using a lot of tab shortcuts to make sure output is properly aligned
    puts("-------------------------------------------------------------------------------------------------");

    while(salary > 0)   //Using a while loop because the amount of iterations are unknown at this point also using a negative value for sentinel.
    {
        printf("Salary: ");
        scanf("%f", &salary);   //User input




        if(salary < 0)  //If statement used to break up calculations
            break;


        if(salary >= 0 && salary < 30000)
            {
                rate = 7.00;
                raise = salary * rate / 100;
                newSalary = salary + raise;
                totalNewSalary += newSalary;
                totalRaise += raise;
                totalSalary += salary;  //Running totals


            }


        if(salary >= 30000 && salary <= 40000)
            {
            rate = 5.5;
            raise = salary * rate / 100;
            newSalary = salary + raise;
            totalNewSalary += newSalary;
            totalRaise += raise;
            totalSalary += salary;

            }


        if(salary > 40000)
            {
            rate = 4.0;
            raise = salary * rate / 100;
            newSalary = salary + raise;
            totalNewSalary += newSalary;
            totalRaise += raise;
            totalSalary += salary;

            }







    printf("\t\t\t\t%.2f\t%.2f\t\t%.2f\t\t\t%.2f\n\n", salary, rate, raise, newSalary);






    }
    puts("-------------------------------------------------------------------------------------------------");
    //Grand totals
    printf("Total:\t\t\t\t%.2f\t\t\t%.2f\t\t\t%.2f", totalSalary, totalRaise, totalNewSalary);

return 0;

}
//User output
/*
Please enter the yearly salary(s) then enter a negative amount to exit the program.

                                Salary          Rate            Raise                   NewSalary
-------------------------------------------------------------------------------------------------
Salary: 25000
                                25000.00        7.00            1750.00                 26750.00

Salary: 30000
                                30000.00        5.50            1650.00                 31650.00

Salary: 35000
                                35000.00        5.50            1925.00                 36925.00

Salary: 40000
                                40000.00        5.50            2200.00                 42200.00

Salary: -1
-------------------------------------------------------------------------------------------------
Total:                          130000.00                       7525.00                 137525.00
Process returned 0 (0x0)   execution time : 14.325 s
Press any key to continue.
*/
