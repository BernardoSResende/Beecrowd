select p.name, f.name from products p, providers f
where f.id = p.id_providers and f.name = 'Ajax SA'