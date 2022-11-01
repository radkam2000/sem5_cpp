<!DOCTYPE html>
<!--
Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
Click nbfs://nbhost/SystemFileSystem/Templates/Scripting/EmptyPHPWebPage.php to edit this template
-->
<html>

<head>
    <meta charset="UTF-8">
    <title>Galeria</title>
</head>

<body>
    <h1>Galeria Zdjęć</h1>
    <?php
    $nazwa = 'obraz1';
    for ($i = 0; $i < 20; $i++) {
        print("\n");
    }

    function galeria($rows, $cols)
    {
        print("\n");
        $numer = 1;
        for ($i = 0; $i < $rows; $i++) {
            for ($j = 0; $j < $cols; $j++) {
                print("<img src='obrazki/obraz$numer.JPG' width=20%; height=200dp; alt='obraz.$numer' />");
                $numer++;
            }
            print("</br>");
        }
    }
    galeria(2, 4);

    ?>
</body>

</html>