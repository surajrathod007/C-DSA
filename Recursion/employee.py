#create a program name "employee.py" and implement of function DA,HRA,PF,AND ITAX.and create another program the uses the function of employee module and calculate gross and the salaries of employee.


import employee
print("SALARY PROGRAM")
name=str(input("Enter name of employee:"))
basic=float(input("Enter Basic Salary:"))
netpay=employee.netpay(basic)
print(f,'Net Salary:{netpay}')
grospay=employee.grospay(basic,netpay)
print(f'gross Salary:{grosspay}')