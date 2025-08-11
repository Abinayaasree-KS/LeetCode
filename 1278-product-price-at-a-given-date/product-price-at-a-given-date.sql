SELECT 
    prod.product_id,
    COALESCE(p.new_price, 10) AS price
FROM ( 
    SELECT DISTINCT product_id 
    FROM Products
) prod
LEFT JOIN (
    SELECT product_id, MAX(change_date) AS change_date
    FROM Products
    WHERE change_date <= '2019-08-16'
    GROUP BY product_id
) latest
    ON prod.product_id = latest.product_id
LEFT JOIN Products p
    ON latest.product_id = p.product_id
    AND latest.change_date = p.change_date;
