-- a script that lists all shows contained in the database hbtn_0d_tvshows
-- Each record should display: tv_shows.title - tv_show_genres.genre_id
-- Results must be sorted in ascending order by tv_shows.title and tv_show_genres.genre_id
SELECT show.`title`, genre.`genre_id` FROM `tv_shows` AS show
    LEFT JOIN `tv_show_genres` AS genre ON show.`id` = genre.`show_id`
ORDER BY show.`title`, genre.`genre_id`;