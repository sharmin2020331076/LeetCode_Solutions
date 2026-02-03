# Write your MySQL query statement below
select t.request_at as Day,
round(sum(case when t.status in('cancelled_by_driver','cancelled_by_client') then 1 else 0 end)/count(*),2) 
as `Cancellation Rate`
from Trips t
join Users c on c.users_id = t.client_id and c.banned = 'No'
join Users d on d.users_id = t.driver_id and d.banned = 'No'
where t.request_at between '2013-10-01' and '2013-10-03'
group by t.request_at 
order by t.request_at