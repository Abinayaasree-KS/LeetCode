# Write your MySQL query statement below
select a.customer_id, count(*) as count_no_trans from visits a where a.visit_id not in (select visit_id from Transactions) group by a.customer_id;