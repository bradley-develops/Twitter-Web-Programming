<?php

function connectDB(){
	$dbConnection = mysqli_connect("sql105.epizy.com", "epiz_24393036", "tJrJQYxO3C", "epiz_24393036_twitter");
	if (mysqli_connect_errno()){
		die(mysqli_connect_error());
	}
	//echo "Database connected successfully . . . <br>";
	return $dbConnection;
}


?>