# Write your MySQL query statement belowselect
SELECT "High Salary" AS category,
       COUNT(IF(income > 50000, 1, NULL)) AS accounts_count
FROM Accounts
UNION ALL
SELECT "Low Salary" AS category,
       COUNT(IF(income < 20000, 1, NULL)) AS accounts_count
FROM Accounts
UNION ALL
SELECT "Average Salary" AS category,
       COUNT(IF(income BETWEEN 20000 AND 50000, 1, NULL)) AS accounts_count
FROM Accounts;


