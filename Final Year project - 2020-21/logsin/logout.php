<?php
session_start();
// Destroying All Sessions
if(session_destroy())
{
// Redirecting To Home Page
header("Location: http://127.0.0.1:5000/home");
}
?>
