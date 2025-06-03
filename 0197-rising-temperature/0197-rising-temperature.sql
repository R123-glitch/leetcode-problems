# Write your MySQL query statement below
SELECT current.id FROM Weather as current
WHERE EXISTS ( SELECT 1 FROM Weather AS yesterday WHERE
current.recordDate=yesterday.recordDate+INTERVAL 1 DAY AND current.temperature>yesterday.temperature);