# Write your MySQL query statement below
select A.unique_id, B.name 
from Employees B
left join EmployeeUNI A
on A.id = b.id 