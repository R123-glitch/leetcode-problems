# Write your MySQL query statement below
SELECT Product.product_name , Sales.year ,Sales.price FROM Sales 
left join Product on Product.product_id = Sales.product_id