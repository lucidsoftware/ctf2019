<?php
	include("db/config.php");
	session_start();

	if (isset($_POST['username']) and isset($_POST['password'])) {
		$username = $_POST['username'];
		$password = $_POST['password'];
		$query = "SELECT id FROM users WHERE password = '$password' AND username = '$username'";
		$result = $db->query($query);
		if (!$result) {
			$error = $db->error;
		} else {
			$count = $result->num_rows;
			// If result matched $username and $password, $count must be 1
			if ($count == 1) {
				$_SESSION['current_user'] = $username;
				header("location: welcome.php");
			} else {
				$error = "Your username or password is invalid";
			}
		}
	}
?>

<!DOCTYPE html>
<html lang="en">
	<head>
		<link rel="stylesheet" type="text/css" href="css/style.css">
		<!-- Bootstrap -->
		<link href="css/bootstrap.min.css" rel="stylesheet">
		<script src="https://ajax.googleapis.com/ajax/libs/jquery/1.12.4/jquery.min.js"></script>
		<script src="js/bootstrap.min.js"></script>
	</head>

	<body>
	<?php if (isset($error)) {
		echo '<div class="alert alert-danger alert-dismissible" role="alert"><button type="button" class="close" data-dismiss="alert" aria-label="Close"><span aria-hidden="true">&times;</span></button>'.$error.'</div>';
	} ?>

		<div class="container">
			<form action="" method="post" class="form-login">
				<h1>Security Challenge</h1>
				<h3>Please log in</h2>
				<label for="inputUsername" class="sr-only">Username</label>
				<input type="text" name="username" id="inputUsername" class="form-control" placeholder="Username" required autofocus>
				<label for="inputPassword" class="sr-only">Password</label>
				<input type="password" name="password" id="inputPassword" class="form-control" placeholder="Password" required>
				<button class="btn btn-lg btn-primary btn-block" type="submit">Log in</button>
			</form>
		</div>
	</body>
</html>