SELECT C.name, SUM(P.amount) as sum FROM categories AS C, products AS P WHERE
    P.id_categories=C.id GROUP BY C.name;