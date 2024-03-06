SELECT PD.name, PV.name FROM providers PV, products PD WHERE
PD.id_providers=PV.id AND PV.name='Ajax SA';