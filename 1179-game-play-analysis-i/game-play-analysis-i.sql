# Write your MySQL query statement below
/*
select player_id,MIN(event_date) as first_login
from Activity 
group by player_id

select distinct a.player_id,
(
    select MIN(event_date) 
    from Activity
    where player_id = a.player_id

) as first_login
from Activity a
*/

select distinct player_id,
MIN(event_date) over (partition by player_id) as first_login
from Activity




