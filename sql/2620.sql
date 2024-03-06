SELECT C.name, O.id FROM orders O, customers C
WHERE O.id_customers=C.id AND
EXTRACT(YEAR FROM O.orders_date)=2016 AND
EXTRACT(MONTH FROM O.orders_date)<7;