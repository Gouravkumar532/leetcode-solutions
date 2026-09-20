/* Write your PL/SQL query statement below */
select department.name as department, employee.name as employee, employee.salary as salary
from employee left join department on employee.departmentid = department.id
where 
employee.salary = (select max(salary) from employee where employee.departmentid = department.id);