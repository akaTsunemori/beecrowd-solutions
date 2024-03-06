SELECT PD.name, PV.name, PD.price
FROM products PD, providers PV, categories C
WHERE PD.id_providers=PV.id AND PD.id_categories=C.id
AND PD.price > 1000 AND C.name='Super Luxury';