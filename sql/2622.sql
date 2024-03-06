SELECT C.name FROM customers C
WHERE EXISTS(SELECT 1 FROM legal_person P
    WHERE C.id=P.id_customers);