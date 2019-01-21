<?php

$servername = "localhost";
$username = "root";
$password = "";

// Create a database connection

$myconn = new mysqli($servername, $username, $password);

// Make sure the connection works
if ($myconn->connect_error)
die ("Connection failed" .$myconn->connect_error);

echo "Successful connection";

$myconn->close();


?>