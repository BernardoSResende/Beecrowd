select substr(n.cpf, 1, 3) || '.' ||
       substr(n.cpf, 4, 3) || '.' ||
       substr(n.cpf, 7, 3) || '-' ||
       substr(n.cpf, 10) as CPF
from customers c, natural_person n
where c.id = n.id_customers