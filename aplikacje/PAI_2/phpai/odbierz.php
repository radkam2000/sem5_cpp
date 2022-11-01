<!DOCTYPE html>
<!--
Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
Click nbfs://nbhost/SystemFileSystem/Templates/Scripting/EmptyPHPWebPage.php to edit this template
-->
<html>

<head>
    <meta charset="UTF-8">
    <title></title>
</head>

<body>
    <a href="http://localhost/phpai/galeria.php">Galeria</a>
    <a href="http://localhost/phpai/index.php">Index</a>
    <a href="http://localhost/phpai/typy.php">Typy</a>
    <a href="http://localhost/phpai/formularz.html">Formularz
        <a href="http://localhost/phpai/formularz.php">Formularz PHP</a><br>
        <h4>Poniżej znajdują się dane odebrane z formularza:</h4>
        <?php
        if (isset($_REQUEST['nazwisko']) && ($_REQUEST['nazwisko'] != "")) {
            $nazwisko = htmlspecialchars(trim($_REQUEST['nazwisko']));
            print("Nazwisko: " . $_GET['nazwisko']);
        } else {
            print("Nie wpisano nazwiska");
        }
        echo "<br>";
        print("Wiek: " . $_GET['wiek'] . "</br>");

        if (!empty($_GET['countries'])) {
            $selected = $_GET['countries'];
            echo 'Państwo: ' . $selected;
        } else {
            echo 'Nie wybrano kraju.';
        }
        print("<br />Adres email: " . $_GET['email']);

        echo "<h4>Zamawiane produkty:</h4>";
        if (isset($_GET['php'])) {
            print("- PHP<br />");
        }
        if (isset($_GET['cpp'])) {
            print("- C++<br />");
        }
        if (isset($_GET['java'])) {
            print("- Java<br />");
        }

        echo "<h4>Sposób zapłaty: </h4>";
        if (isset($_GET['eurocard'])) {
            print("- eurocard<br />");
        }
        if (isset($_GET['visa'])) {
            print("- visa<br />");
        }
        if (isset($_GET['przelew'])) {
            print("- przelew bankowy<br />");
        }
        ?>
</body>

</html>