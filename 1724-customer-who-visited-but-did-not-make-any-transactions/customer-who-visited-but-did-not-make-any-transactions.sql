# Write your MySQL query statement below
select A.customer_id, count(*) as count_no_trans 
from Visits A
where A.visit_id not in (select visit_id from Transactions) 
group by A.customer_id