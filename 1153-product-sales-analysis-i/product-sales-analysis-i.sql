# Write your MySQL query statement below
select s.price, p.product_name, s.year
from Sales s
left join Product p
on s.product_id  = p.product_id 