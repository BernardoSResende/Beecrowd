select c.name, o.id from customers c, orders o
where c.id = o.id_customers and
o.orders_date > '2015-12-31' and 
o.orders_date < '2016-07-01'