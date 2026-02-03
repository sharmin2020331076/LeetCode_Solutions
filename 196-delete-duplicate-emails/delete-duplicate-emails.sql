# Write your MySQL query statement below
delete p from Person p
join Person r
where p.id>r.id and p.email = r.email