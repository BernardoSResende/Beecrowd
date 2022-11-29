select c.name, trunc((((s.math*2) + (s.specific*3) 
+ (s.project_plan*5))/10),2) as avg from
candidate c, score s where c.id = s.candidate_id
order by avg desc