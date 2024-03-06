SELECT PD.name, PV.name, C.name
FROM products PD, providers PV, categories C
WHERE PD.id_providers=PV.id AND PD.id_categories=C.id AND
PV.name='Sansul SA' AND C.name='Imported';