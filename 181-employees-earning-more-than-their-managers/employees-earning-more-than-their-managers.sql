# Write your MySQL query statement below
select p.name as Employee
from Employee e
join Employee p on e.id=p.managerId
where p.salary>e.salary