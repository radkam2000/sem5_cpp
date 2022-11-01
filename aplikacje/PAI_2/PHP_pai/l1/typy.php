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
    $zm1 = 1234;
    $zm2 = 567.789;
    $zm3 = 1;
    $zm4 = 0;
    $zm5 = true;
    $zm6 = "0";
    $zm7 = "Typy w PHP";
    $zm8 = [1, 2, 3, 4];
    $zm9 = [];
    $zm10 = ["zielony", "czerwony", "niebieski"];
    $zm11 = ["Agata", "Agatowska", 4.67, true];
    $zm12 = new DateTime();

    //a)
    print("zm1=$zm1");
    print("</br>");
    print("zm2=$zm2");
    print("</br>");
    print("zm3=$zm3");
    print("</br>");
    print("zm4=$zm4");
    print("</br>");
    print("zm5=$zm5");
    print("</br>");
    print("zm6=$zm6");
    print("</br>");
    print("zm7=$zm7");
    print("</br>");
    print("zm8=".count($zm8));
    print("</br>");
    print("zm9=".count($zm9));
    print("</br>");
    print("zm10=".count($zm10));
    print("</br>");
    print("zm11=".count($zm11));
    print("</br>");
    print("zm12=");
    var_dump($zm12);
    print("</br>");
    print("</br>");

    //b)
    print(is_bool($zm4));
    print("</br>");
    print(is_bool($zm5));
    print("</br>");
    print(is_int($zm1));
    print("</br>");
    print(is_int($zm3));
    print("</br>");
    print(is_numeric($zm2));
    print("</br>");
    print(is_string($zm7));
    print("</br>");
    print(is_array($zm8));
    print("</br>");
    print(is_array($zm10));
    print("</br>");
    print(is_array($zm11));
    print("</br>");
    print(is_object($zm12));
    print("</br>");
    print("</br>");


    //c)
    print($zm4 == $zm6);
    print("</br>");
    print($zm4 === $zm6);
    print("</br>");
    print($zm5 == $zm3);
    print("</br>");
    print($zm5 === $zm3);
    print("</br>");
    print("</br>");

    //d)
    var_dump($zm10);
    print("</br>");
    print_r($zm11);
    print("</br>");
    ?>
</body>

</html>