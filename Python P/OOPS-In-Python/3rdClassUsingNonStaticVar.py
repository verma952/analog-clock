# Example Using Non Static Variable
class Employee:
    def setValue(self,empid,empname,salary):
        self.empid = empid
        self.empname = empname
        self.salary = salary
    def display(self):
        print("Employee Id :",self.empid)
        print("Employee Name :",self.empname)
        print("Employee Salary:",self.salary)
e = Employee() #Creation of Object
eid = int(input("Enter Employee Id:"))
ename = input("Enter Employee Name:")
esalary = int(input("Enter Employee Salary:"))
e.setValue(eid, ename, esalary)
e.display()