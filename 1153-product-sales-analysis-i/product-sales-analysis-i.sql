# Write your MySQL query statement below
select B.product_name, A.year, A.price 
from Sales A
inner join Product B
on B.product_id = A.product_id;