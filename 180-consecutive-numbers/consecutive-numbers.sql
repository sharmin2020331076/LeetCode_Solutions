# Write your MySQL query statement below
select distinct l1.num as ConsecutiveNums
from Logs l1
where exists (
    select 1 from Logs
    where num = l1.num and id = l1.id+1 

)

and 
exists(
    select 1 from Logs
    where num = l1.num and id = l1.id+2
)


