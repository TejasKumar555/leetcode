# Write your MySQL query statement below
select employeeuni.unique_id,employees.name from employees left join employeeuni on employeeuni.id=employees.id