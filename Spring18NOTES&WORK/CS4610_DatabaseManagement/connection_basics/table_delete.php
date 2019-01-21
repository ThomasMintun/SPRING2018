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

// Deletion
$mysql = "DELETE FROM Person WHERE person_id = 4322";



if ($myconn->query($mysql) === TRUE) {
echo "Row deleted";

}
else {
echo "Unuccessful deletion";

}

$myconn->close();




?>
