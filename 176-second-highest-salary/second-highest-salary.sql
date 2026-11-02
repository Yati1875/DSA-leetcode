# Write your MySQL query statement below
select Max(salary) as SecondHighestSalary
from Employee
where salary<(Select MAX(salary) from Employee);
