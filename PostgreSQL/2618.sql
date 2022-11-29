select p.name, f.name, c.name 
from products p, providers f, categories c
where p.id_providers = f.id and p.id_categories = c.id
and f.name = 'Sansul SA' and c.name = 'Imported'