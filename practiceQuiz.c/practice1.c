#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct StringType {
    char *string;
    int length;
} StringType;

typedef struct Employee {
    StringType *ename;
    double salary;
} Employee;

Employee* createEmployees(char names[][50], double *salaries, int empCount) {
    // 1. Allocate memory for the array of Employee structs

    Employee *employeePtr = malloc(empCount * sizeof(Employee));
    // 2. Loop through each employee (0 to empCount)
    
    for (int i = 0; i < empCount; i++)
    {


        
        // a. Assign the salary from the salaries array

        *salaries = employeePtr->salary;        
        // b. Allocate memory for the StringType pointer (*ename)

         // c. Allocate the exact amount of memory needed for the name string
        //    (Remember to account for the null terminator)

        StringType *ename = malloc(strlen(names)+ 1 * sizeof(StringType));
        
        // d. Copy the name from the names list into the new string
        strcpy(employeePtr[i].ename->string, ename);
        // e. Set the length property in the StringType struct
        int length = ename[i].length;

    }
    return createEmployees;
    

    // 3. Return the pointer to the employee array
}

int main() {
    // Array of employees' names
    char nameList[][50] = {"Adam", "Josh", "Kyle", "Ali", "Mohammed"};
    
    // Array of salaries
    double salaries[5] = {15.80, 13.5, 20.9, 12.99, 10.5};
    
    // Call the function
    Employee *employees = createEmployees(nameList, salaries, 5);

    // Other code (Printing, Freeing memory, etc.)
    
    return 0;
}