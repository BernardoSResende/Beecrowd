select l.name as name, a.coiso as customers_number from (select max(customers_number) as coiso from lawyers) a, 
lawyers l where
a.coiso = l.customers_number

union all select l.name, a.coiso as customers_number from (select min(customers_number) as coiso from lawyers) a,
lawyers l where
a.coiso = l.customers_number 

union all select 'Average', round (avg(customers_number),0) from lawyers