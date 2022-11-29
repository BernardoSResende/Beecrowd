select p.name from products p, providers f
where p.id_providers = f.id
and amount >=10 and amount <=20
and f.name like('P%')