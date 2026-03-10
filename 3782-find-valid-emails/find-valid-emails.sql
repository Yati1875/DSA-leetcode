# Write your MySQL query statement below
SELECT user_id,email
FROM Users
Where email REGEXP '^[A-Za-z0-9_]+@[a-zA-z]+\\.com$'
ORDER BY user_id;;