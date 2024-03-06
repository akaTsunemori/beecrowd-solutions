SELECT C.id, C.name FROM customers C WHERE
NOT EXISTS(SELECT 1 FROM locations L WHERE C.id=L.id_customers);