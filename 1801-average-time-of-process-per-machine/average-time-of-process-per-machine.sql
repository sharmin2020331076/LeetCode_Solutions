# Write your MySQL query statement below
/*
SELECT 
    machine_id,
    ROUND(AVG(end_time - start_time), 3) AS processing_time
FROM (
    SELECT 
        machine_id,
        process_id,
        MAX(CASE WHEN activity_type = 'end' THEN timestamp END) AS end_time,
        MAX(CASE WHEN activity_type = 'start' THEN timestamp END) AS start_time
    FROM Activity
    GROUP BY machine_id, process_id
) AS process_times
GROUP BY machine_id;*/

select a.machine_id,
round(avg(b.timestamp - a.timestamp ),3) as processing_time 
from Activity a
join Activity b
on a.machine_id = b.machine_id 
and a.process_id = b.process_id
where a.activity_type = 'start'
and b.activity_type = 'end'
group by a.machine_id





