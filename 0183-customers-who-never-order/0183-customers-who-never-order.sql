/* Write your PL/SQL query statement below */
select customers.name as customers 
from customers left join orders 
on customers.id=orders.customerid
where orders.customerid is null;