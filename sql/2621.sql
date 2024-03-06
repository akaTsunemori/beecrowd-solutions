SELECT PD.name FROM providers PV, products PD
WHERE LEFT(PV.name, 1)='P' AND
PD.id_providers=PV.id AND
PD.amount>=10 AND PD.amount<=20;