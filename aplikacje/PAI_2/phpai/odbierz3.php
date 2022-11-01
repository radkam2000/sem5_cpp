<!DOCTYPE html>
<!--
Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
Click nbfs://nbhost/SystemFileSystem/Templates/Scripting/EmptyPHPWebPage.php to edit this template
-->
<html>

<head>
    <meta charset="UTF-8">
    <title>Odbierz 3</title>
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
            print("Nazwisko: " . $_POST['nazwisko']);
        } else {
            print("Nie wpisano nazwiska");
        }
        echo "<br>";
        print("Wiek: " . $_POST['wiek'] . "</br>");

        if (!empty($_POST['countries'])) {
            $selected = $_POST['countries'];
            echo 'Państwo: ' . $selected;
        } else {
            echo 'Nie wybrano kraju.';
        }
        print("<br />Adres email: " . $_POST['email']);

        echo "<h4>Zamawiane produkty:</h4>";
        $jezyki = ["C", "CPP", "Java", "C#", "HTML", "CSS", "XML", "PHP", "JavaScript"];
        if (isset($_REQUEST['jezyki'])) {
            echo "Zamówione kursy foreach: <br>";
            foreach ($_REQUEST['jezyki'] as $jezyk) {
                echo $jezyk . ", ";
            }

            echo "<br><br>Zamówione kursy join: <br>";

            echo join(", ", $_REQUEST['jezyki']);

            echo "<br><br>Zamówione kursy var_dump: <br>";
            foreach ($_REQUEST['jezyki'] as $jezyk) {
                var_dump($jezyk);
            }

            echo "<br /> <br />Wybrane języki poprzez for each REQUEST z użyciem var_dump:<br> ";
            foreach ($_REQUEST as $key => $value) {
                if (is_array($value)) {
                    echo join(", ", $value);
                } else {
                    var_dump("$key = $value <br />");
                }
            }
        }

        echo "<h4>Sposób zapłaty: </h4>";
        if (isset($_POST['eurocard'])) {
            print("Eurocard<br />");
        }
        if (isset($_POST['visa'])) {
            print("Visa<br />");
        }
        if (isset($_POST['przelew'])) {
            print("Przelew bankowy<br />");
        }
        ?>
</body>

</html>