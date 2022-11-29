select p.name, c.name from products p, categories c
where p.id_categories = c.id and p.amount > 100
and (c.id = 1 or c.id = 2 or c.id = 3 or c.id=6 or c.id = 9)
order by c.id