<!DOCTYPE html>
<html lang="zxx">
<head>
    <link rel="stylesheet" href="css/style2.css">
  <link href="https://fonts.googleapis.com/css?family=Ubuntu" rel="stylesheet">
  <meta name="viewport" content="width=device-width, initial-scale=1" />
  <link rel="stylesheet" href="css/font-awesome.min.css">
  <title>Sign in</title>


	<meta charset="UTF-8">
	<meta name="description" content="SolMusic HTML Template">
	<meta name="keywords" content="music, html">
	<meta name="viewport" content="width=device-width, initial-scale=1.0">

	<!-- Favicon -->
	<link href="img/favicon.ico" rel="shortcut icon"/>

	<!-- Google font -->
	<link href="https://fonts.googleapis.com/css?family=Montserrat:300,300i,400,400i,500,500i,600,600i,700,700i&display=swap" rel="stylesheet">

	<!-- Stylesheets -->
	<link rel="stylesheet" href="css/bootstrap.min.css"/>
	<link rel="stylesheet" href="css/font-awesome.min.css"/>
	<link rel="stylesheet" href="css/owl.carousel.min.css"/>
	<link rel="stylesheet" href="css/slicknav.min.css"/>

	<!-- Main Stylesheets -->
	<link rel="stylesheet" href="css/style.css"/>


	<!--[if lt IE 9]>
		<script src="https://oss.maxcdn.com/html5shiv/3.7.2/html5shiv.min.js"></script>
		<script src="https://oss.maxcdn.com/respond/1.4.2/respond.min.js"></script>
	<![endif]-->

</head>
<body>
	<!-- Page Preloder -->
	<div id="preloder">
		<div class="loader"></div>
	</div>

	<!-- Header section -->
	<header class="header-section clearfix">
		<a href="http://127.0.0.1:5000/" class="site-logo">
			<h4 style="color:#fc0254;">MOVIE<span style="color:white;">REC</span></h4>
		</a>
		<div class="header-right">
			<a href="http://127.0.0.1:5000/home#howitworks" class="hr-btn">Help</a>
			<span>|</span>
			<div class="user-panel">
				<a href="login.php" class="login">Login</a>
				<a href="registration.php" class="register">Create an account</a>
			</div>
		</div>
		<ul class="main-menu">
      <li><a href="http://127.0.0.1:5000/">Home</a></li>
			<li><a href="http://127.0.0.1:5000/home#best-rated">Best Rated</a></li>
			<li><a href="http://127.0.0.1:5000/home#trending">Trending</a></li>
		</ul>
	</header>
<?php
require('db.php');
session_start();
// If form submitted, insert values into the database.
if (isset($_POST['username'])){
        // removes backslashes
	$username = stripslashes($_REQUEST['username']);
        //escapes special characters in a string
	$username = mysqli_real_escape_string($con,$username);
	$password = stripslashes($_REQUEST['password']);
	$password = mysqli_real_escape_string($con,$password);
	//Checking is user existing in the database or not
        $query = "SELECT * FROM `users` WHERE username='$username'
and password='".md5($password)."'";
	$result = mysqli_query($con,$query) or die(mysql_error());
	$rows = mysqli_num_rows($result);
        if($rows==1){
	    $_SESSION['username'] = $username;
            // Redirect user to index.php
	    header("Location: http://[::1]:8000/movies/static/movies/index.html");
         }else{
	echo "<div class='form'>
<h3>Username/password is incorrect.</h3>
<br/>Click here to <a href='login.php'>Login</a></div>";
	}
    }else{
?>
	<div class="main">
		 <p class="sign" align="center">Sign in</p>
		 <form action="" method="post" name="login" class = "form1">
		 <input class = "un" type="text" name="username" placeholder="Username" required />
		 <input class = "pass" type="password" name="password" placeholder="Password" required />
		 <br>
		 <input class = "submit" align="center" name="submit" type="submit" value="Login" />
	 </form>
	 <center><p>Don't have a account yet? <a href='registration.php'>Register Here</a></p></center>
	</div>
	<?php } ?>
	</body>
</html>

<footer class="footer-section">
	<div class="container">
		<div class="row">
			<div class="col-xl-6 col-lg-7 order-lg-2">

			</div>
			<div class="col-xl-6 col-lg-5 order-lg-1">
				<h4 style="color:#fc0254;">MOVIE<span style="color:white;">REC</span></h4>

				<div class="social-links">
					<a href=""><i class="fa fa-instagram"></i></a>
					<a href=""><i class="fa fa-pinterest"></i></a>
					<a href=""><i class="fa fa-facebook"></i></a>
					<a href=""><i class="fa fa-twitter"></i></a>
					<a href=""><i class="fa fa-youtube"></i></a>
				</div>
			</div>
		</div>
	</div>
</footer>
<!-- Footer section end -->

<!--====== Javascripts & Jquery ======-->
<script src="js/jquery-3.2.1.min.js"></script>
<script src="js/bootstrap.min.js"></script>
<script src="js/jquery.slicknav.min.js"></script>
<script src="js/owl.carousel.min.js"></script>
<script src="js/mixitup.min.js"></script>
<script src="js/main.js"></script>

</body>
</html>
