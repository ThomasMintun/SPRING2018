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

// Update
$mysql = "UPDATE Person SET name='Michael' where person_id = 4321";



if ($myconn->query($mysql) === TRUE) {
echo "Successful";

}
else {
echo "Unuccessful deletion";

}

$myconn->close();




?>
