# Write your MySQL query statement below
select u.id 
from Weather u, Weather f
where u.recordDate = date_add(f.recordDate, interval 1 day)
and u.temperature > f.temperature 
