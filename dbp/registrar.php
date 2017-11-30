<?php


header("Content-Type: text/javascript");
$data = json_decode(file_get_contents('php://input'), true);

$dbhost = "localhost";
$dbuser = "admin";
$dbpass = "0000";
$db = "chat";

$conn = new mysqli($dbhost, $dbuser, $dbpass,$db) or die("Conexion fallida: %s\n". $conn -> error);

$sql = "INSERT INTO usuarios (nombre, apellido, contrasenha) ";
	$sql .= " VALUES ('" . $data["nombres"] . "', '" . $data["apellidos"] . "', '";
	$sql .= $data["password"] . "')";


$result = $conn->query($sql);

if ($result === TRUE) {
	echo "Se ha registrado correctamente :D";
	//echo '{"codigo": "' . $data["codigo"] . '"}';
	//echo '{"Nigga": "Conexion realizada xd"}';
}
else {
	echo "Error ctmre >:v";
	//echo '{"error": "NP"}';
}

$conn->close();

?>