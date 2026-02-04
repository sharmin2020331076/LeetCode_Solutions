# Write your MySQL query statement below
/*
select st.student_id, st.student_name, sb.subject_name, count(ex.subject_name) as attended_exams 
from Students st
cross join Subjects sb
left join Examinations ex
on st.student_id = ex.student_id
and ex.subject_name = sb.subject_name
group by st.student_id, st.student_name, sb.subject_name
order by st.student_id, sb.subject_name*/


#using subquery
SELECT
  s.student_id,
  s.student_name,
  sub.subject_name,
  (
    SELECT COUNT(*)
    FROM Examinations e
    WHERE e.student_id = s.student_id
      AND e.subject_name = sub.subject_name
  ) AS attended_exams
FROM Students s
CROSS JOIN Subjects sub
ORDER BY s.student_id, sub.subject_name;



