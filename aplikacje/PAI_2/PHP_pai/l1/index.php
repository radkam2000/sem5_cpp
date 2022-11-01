<!DOCTYPE html>
<html>
    <head>
        <meta charset="UTF-8">
        <title>Pierwszy skrypt w PHP</title>
    </head>
    <body>
        <?php
            // php code
            echo "<h2>Pierwszy skrypt w PHP</h2>";
            $n=4567;
            $x=10.123456789;
            echo "<h4>Z kropką:</h4>";
            echo "Domyślny format: n=" . $n . " x=" . $x;

            echo "<h4>Bez kropki:</h4>";
            echo "Domyślny format: n=$n x=$x";

            echo '<h4>W pojedynczym cudzysłowie:</h4>';
            echo 'Domyślny format: n=$n x=$x';

            echo "<h4>Operacje na liczbach - funkcje, rzutowanie</h4>";
            echo "<p>Zaokrąglenie do liczby całkowitej x=".(int)$x."</p>";
            echo "<p>Zaokrąglenie do trzech miejsc po przecinku x=".round($x, 3)."</p>";

            echo "<h4>Operacje na liczbach - printf, wzorce</h4>";
            echo "<p>Zaokrąglenie do liczby całkowitej x=";
            printf("%d", $x);
            echo "</p>";
            echo "<p>Zaokrąglenie do trzech miejsc po przecinku x=";
            printf("%.3f", $x);
            echo "</p>";
        ?>
    </body>
</html>