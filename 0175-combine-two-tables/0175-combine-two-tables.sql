# Write your MySQL query statement belos
select Person.firstName,Person.LastName,Address.city,Address.state
from Person left join Address 
on Person.personId = Address.personId;