select p.name, f.name, p.price from products p, providers f, categories c
where p.id_providers = f.id and p.id_categories = c.id
and p.price>1000 and c.name = 'Super Luxury'