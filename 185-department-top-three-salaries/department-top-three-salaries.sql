# Write your MySQL query statement below
/*
select d.name as Department, e.name as Employee, e.salary as Salary 
from Employee e
join Department d
on d.id = e.departmentId 
where e.salary = (
    select MAX(salary) from Employee
    where departmentId = d.id 

)
or e.salary = (
    select MAX(salary) from Employee
    where departmentId = d.id 
    and salary < (
        select MAX(salary) from Employee
        where departmentId = d.id 
    ) 
)
or e.salary = (
    select MAX(salary) from Employee
    where departmentId = d.id 
    and salary < (
        select MAX(salary) from Employee
        where departmentId = d.id 
        and salary < (
            select MAX(salary) from Employee
            where departmentId = d.id
        )
    ) 
)*/

select d.name as Department, e.name as Employee, e.salary as Salary 
from (
    select e.*, dense_rank()  
    over (
        partition by departmentId order by salary desc

    ) as rnk from Employee e
) e
join Department d
on d.id = e.departmentId 
where rnk <= 3
