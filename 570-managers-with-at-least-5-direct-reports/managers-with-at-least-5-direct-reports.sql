# Write your MySQL query statement below
select name from employee join (select managerId ,count(*) from employee group by managerId having count(*)>=5)  as T2 ON employee.id=T2.managerId