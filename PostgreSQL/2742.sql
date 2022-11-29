select l.name, trunc((l.omega * 1.618),3) as "Fator N" from dimensions d, life_registry l
where d.id = l.dimensions_id
and(d.name = 'C875' or d.name = 'C774') and l.name LIKE('Richard%')