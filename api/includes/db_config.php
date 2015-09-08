<?php
	global $conn;
	$mysql_database = "localhost";
	$mysql_username = "root";
	$mysql_password = "password";
	$mysql_dbname   = "Entertainment";
	$conn = new mysqli($mysql_database,$mysql_username,$mysql_password,$mysql_dbname);
?>