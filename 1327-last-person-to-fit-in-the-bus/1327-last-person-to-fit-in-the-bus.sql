# Write your MySQL query statement below
select person_name from Queue q1 where 1000>=(select sum(weight) from Queue q2 where 
q1.turn>=q2.turn) order by turn desc limit 1;