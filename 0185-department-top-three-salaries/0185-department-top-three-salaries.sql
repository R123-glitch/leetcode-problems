# Write your MySQL query statement below
select e1.name as Employee,e1.salary as Salary,d.name as Department from Employee e1
join Department d on e1.departmentId=d.id 
where (select count(distinct salary) from Employee e2 where e2.departmentId=e1.departmentId and e2.salary>=e1.salary)<=3
order by Department,Salary desc ;