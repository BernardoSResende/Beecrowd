select l.name, cast(extract(day from l.payday)
as integer) as day
from loan l