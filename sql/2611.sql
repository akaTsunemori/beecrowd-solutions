SELECT M.id, M.name FROM movies AS M, genres AS G
    WHERE M.id_genres=G.id AND G.description='Action';