select a.name from
(select 'Podium: ' || team as name, position
from league order by position fetch next 3 rows only) a

union all

select name from
(select b.name,b.position from (select 'Demoted: ' || team as name, position
from league order by position desc fetch next 2 rows only ) B order by position) c