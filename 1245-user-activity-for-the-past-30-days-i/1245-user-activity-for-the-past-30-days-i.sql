# Write your MySQL query statement be
select count(distinct user_id) as active_users , activity_date as day 
from Activity
where activity_date  between '2019-06-28' and '2019-07-27' 
group by activity_date;