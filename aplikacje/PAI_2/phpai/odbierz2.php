<!DOCTYPE html>
<!--
Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
Click nbfs://nbhost/SystemFileSystem/Templates/Scripting/EmptyPHPWebPage.php to edit this template
-->
<html>

<head>
    <meta charset="UTF-8">
    <title></title>
    <link rel="stylesheet" type="text/css" href="index.css" media="screen" />
</head>

<body>
    <a href="http://localhost/phpai/galeria.php">Galeria</a>
    <a href="http://localhost/phpai/index.php">Index</a>
    <a href="http://localhost/phpai/typy.php">Typy</a>
    <a href="http://localhost/phpai/formularz.html">Formularz
        <a href="http://localhost/phpai/formularz.php">Formularz PHP</a><br>
        <?php
        echo "<br />Wybrane języki poprzez for each REQUEST:<br> ";
        foreach ($_REQUEST as $key => $value) {
            echo "$key = $value <br />";
        }

        echo "<br />Wybrane języki poprzez for each GET:<br> ";
        foreach ($_GET as $key => $value) {
            echo "$key = $value <br />";
        }

        echo "<br />Wybrane języki poprzez for each POST:<br> ";
        foreach ($_POST as $key => $value) {
            echo "$key = $value <br />";
        }

        echo "<br />Wybrane języki poprzez for each REQUEST z użyciem var_dump:<br> ";
        foreach ($_REQUEST as $key => $value) {
            var_dump("$key = $value <br />");
        }


        //C) Przy użyciu GET w hiperłączu pojawiają się dane wpisane w formularzu, przy użyciu POST nie pojawiają się
        ?>


        <br><a href="http://localhost/phpai/formularz.html">Powrót do formularza </a>
</body>

</html>