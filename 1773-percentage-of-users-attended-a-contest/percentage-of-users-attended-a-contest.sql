# Write your MySQL query statement below

select r.contest_id, 
round(count(distinct r.user_id)*100.0 / (select count(*) from Users) ,2) as percentage 
from Register r
GROUP BY r.contest_id
ORDER BY percentage DESC, contest_id ASC;

 