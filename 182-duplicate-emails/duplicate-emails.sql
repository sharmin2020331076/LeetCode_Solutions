# Write your MySQL query statement below
select distinct p.email as Email 
from Person p
join Person p1 
on p.email = p1.email and p.id != p1.id