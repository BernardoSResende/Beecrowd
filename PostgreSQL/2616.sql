select id,name from customers except select c.id, c.name from customers c,locations l where l.id_customers = c.id order by id