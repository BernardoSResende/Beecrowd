select c.name, r.rentals_date from customers c, rentals r
where c.id = r.id_customers and r.rentals_date >= '2016/09/01' 
                            and r.rentals_date <= '2016/09/30';