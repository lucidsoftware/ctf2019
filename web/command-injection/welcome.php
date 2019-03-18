<?php
if( isset( $_POST[ 'submit' ]  ) ) {
	$target = $_REQUEST[ 'ip' ];

	if (preg_match('/[;]/', $target))
	{
		echo 'Dont use special characters! This will be reported';
	}

	else 
	{
		$cmd = shell_exec( 'ping  -c 4 ' . $target );
	}
	
	// Feedback for the end user
	$html = "<pre>{$cmd}</pre>";
	echo $html;
}
?>

<!DOCTYPE html>
<html lang="en">
	<head>
		<meta charset="utf-8">
		<title>Lucid Security Challenge</title>
		<link rel="shortcut icon" href="/favicon.ico" type="image/x-icon">
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
			<h1>Welcome</h1>
			<a href="logout.php"><button type="button" class="btn btn-primary">Log Out</button></a>
			<h3>Test Ping</h3> 
			<form method="post" action="" class="form-search">
				<div class="row">
					<div class="col-xs-12 col-sm-6 col-md-4">
						<div class="input-group">
							<input type="text" class="form-control" name="ip" id="searchInput" placeholder="Ping" autofocus>
							<span class="input-group-btn">
								<input type="submit" name="submit" value="Test" class="btn btn-primary">
							</span>
						</div>
					</div>
				</div>
			</form>
			</div>
		</div>
	</body>
</html>