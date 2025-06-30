# Write your MySQL query statement below
select A.student_id , A.student_name, S.subject_name, 
count(B.student_id) attended_exams 
from Students A 
cross join Subjects S 
left join Examinations B 
on A.student_id = B.student_id 
and S.subject_name = B.subject_name
group by A.student_id, A.student_name, S.subject_name
order by A.student_id, A.student_name, S.subject_name 