SELECT C.name, R.rentals_date FROM customers AS C, rentals AS R
    WHERE C.id=R.id_customers AND EXTRACT(MONTH FROM R.rentals_date)=09 AND
    EXTRACT(YEAR FROM R.rentals_date)=2016;