//Compile using the following command: gcc employeeMain.c employeeTable.c employeeOne.c 
 
//gcc employeeMain.c employeeTable.c employeeTwo.c 
 
#include <string.h> 
#include <stdlib.h> 
#include "Employee.h" 
int main(void){ 
    //defined in employeeSearchOne.c 
    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind); 
    PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char * nameToFind); 
    PtrToEmployee searchEmployeeBySalary(const Employee table[], int sizeTable, double nameToFind); 
    PtrToEmployee searchEmployeeByPhone(const Employee table[], int sizeTable, char * targetPhone);
    
 
    //defined in employeeTable.c 
    extern Employee EmployeeTable[];     
    extern const int EmployeeTableEntries;      
 
    PtrToEmployee matchPtr;  //Declaration 
    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1045); 
 
    //Example not found 
    if (matchPtr != NULL) 
        printf("Employee ID 1045 is in record %d\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee ID is NOT found in the record\n"); 
 
    //Example found 
    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony Bobcat"); 
    if (matchPtr != NULL) 
        printf("Employee Tony Bobcat is in record %d\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee Tony Bobcat is NOT found in the record\n"); 
    
    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 6.34); 

    if (matchPtr != NULL) 
        printf("Employee Salary is in record %ld\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee Salary is NOT found in the record\n"); 

    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "909-555-1235"); 

    if (matchPtr != NULL) 
        printf("Employee Phone is in record %ld\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee Phone is NOT found in the record\n"); 

    return EXIT_SUCCESS; 
} 