<?php

$servername = "localhost";
$username = "root";
$password = "";
$database_name ="firstdb";

// Create a database connection

$myconn = new mysqli($servername, $username, $password, $database_name);

// Make sure the connection works
if ($myconn->connect_error)
die ("Connection failed" .$myconn->connect_error);

// Create a table
$mysql = "INSERT INTO Person (person_id, name, email) VALUES ('4322', 'Tom', 'tom@umsl.edu')";



if ($myconn->query($mysql) === TRUE) {
echo "Row added";

}
else {
echo "Unuccessful insertion";

}






?>
