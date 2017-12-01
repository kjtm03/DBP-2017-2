<?php
header("Content-Type: text/javascript");

$data = json_decode(file_get_contents('php://input'), true);

	$dbhost = "localhost";
	$dbuser = "admin";
	$dbpass = "0000";
	$db = "chat";
	 
	$conn = new mysqli($dbhost, $dbuser, $dbpass,$db) or die("Conexion fallida: %s\n". $conn -> error);

	$sql = "SELECT nombre, contrasenha FROM usuarios WHERE nombre ='" .  $data["nickname"] . "'";
	$result = $conn->query($sql);

	if($row = $result->fetch_assoc()) {

		echo 'true';
	} 
	else {
		echo 'false';
	}

	$conn->close();


?>