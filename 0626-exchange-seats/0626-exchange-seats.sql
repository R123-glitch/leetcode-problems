# Write your MySQL query statement below
select Row_Number() over() id,student from Seat
order by if(mod(id,2)=0,id-1,id+1)