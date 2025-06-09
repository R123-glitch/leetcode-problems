# Write your MySQL query statement below
select product_name,sum(  Orders.unit) as unit from Products join Orders on 
Products.product_id=Orders.Product_id 
where year(Orders.order_date)=2020 and month(Orders.order_date)=02
group by Orders.product_id having unit>=100 