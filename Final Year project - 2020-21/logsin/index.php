<?php
session_start();
if(!isset($_SESSION["username"])){
header("Location: login.php");
exit(); }
?>
<html>
<p><a href = "https://demo.rapidquest.in/movie_recommendation/static/index.html">Movie Rec</a></p>

<a href="logout.php">Logout</a>
</html>
