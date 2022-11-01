<!DOCTYPE html>
<!--
Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
Click nbfs://nbhost/SystemFileSystem/Templates/Project/PHP/PHPProject.php to edit this template
-->
<html>

<head>
    <meta charset="UTF-8">
    <title>Typy</title>
</head>

<body>

    <?php
    $a = 1234;
    $b = 567.789;
    $c = 1;
    $d = 0;
    $e = true;
    $f = "0";
    $g = "Typy w PHP";
    $h = [1, 2, 3, 4];
    $i = [];
    $j = ["zielony", "czerwony", "niebieski"];
    $k = ["Agata", "Agatowska", 4.67, true];
    $l = new DateTime();

    //A
    print($a);
    print("</br>");
    print($b);
    print("</br>");
    print($c);
    print("</br>");
    print($d);
    print("</br>");
    print($e);
    print("</br>");
    print($f);
    print("</br>");
    print($g);
    print("</br>");
    print(count($h));
    print("</br>");
    print(count($i));
    print("</br>");
    print(count($j));
    print("</br>");
    print(count($k));
    print("</br>");
    var_dump($l);
    print("</br>");
    print("</br>");

    //B

    print(is_bool($e));
    print("</br>");
    print(is_int($a));
    print("</br>");
    print(is_numeric($b));
    print("</br>");
    print(is_string($g));
    print("</br>");
    print(is_array($h));
    print("</br>");
    print(is_object($l));
    print("</br>");
    print("</br>");


    //C

    print($d == $f);
    print("</br>");
    print($d === $f);
    print("</br>");
    print($e == $c);
    print("</br>");
    print($e === $c);
    print("</br>");
    var_dump($j);
    print("</br>");
    print_r($k);
    ?>
</body>

</html>