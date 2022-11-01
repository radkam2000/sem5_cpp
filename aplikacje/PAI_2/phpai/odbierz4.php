<!DOCTYPE html>
<!--
Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
Click nbfs://nbhost/SystemFileSystem/Templates/Scripting/EmptyPHPWebPage.php to edit this template
-->
<html>

<head>
    <meta charset="UTF-8">
    <title>Odbierz 4</title>
</head>

<body>
    <a href="http://localhost/phpai/galeria.php">Galeria</a>
    <a href="http://localhost/phpai/index.php">Index</a>
    <a href="http://localhost/phpai/typy.php">Typy</a>
    <a href="http://localhost/phpai/formularz.html">Formularz </a>
    <a href="http://localhost/phpai/formularz.php">Formularz PHP</a><br>
    <h4>Poniżej znajdują się dane odebrane z formularza:</h4>
    <?php
    echo "<h4>Zamawiane produkty:</h4>";
    $jezyki = ["C", "CPP", "Java", "C#", "HTML", "CSS", "XML", "PHP", "JavaScript"];
    if (isset($_REQUEST['jezyki'])) {
        echo "Zamówione kursy foreach: <br>";
        foreach ($_REQUEST['jezyki'] as $jezyk) {
            echo $jezyk . ", ";
        }
    }

    echo "<h4>Sposób zapłaty: </h4>";
    if (isset($_POST['eurocard'])) {
        echo ("Eurocard<br />");
    }
    if (isset($_POST['visa'])) {
        echo ("Visa<br />");
    }
    if (isset($_POST['przelew'])) {
        echo ("Przelew bankowy<br />");
    }


    if (
        isset($_REQUEST['nazwisko']) && ($_REQUEST['nazwisko'] != "")
        && isset($_REQUEST['wiek']) && ($_REQUEST['wiek'] != "")
        && isset($_REQUEST['email']) && ($_REQUEST['email'] != "")
    ) {
        $nazwisko = htmlspecialchars(trim($_REQUEST['nazwisko']));
        $wiek = htmlspecialchars(trim($_REQUEST['wiek']));
        $email = htmlspecialchars(trim($_REQUEST['email']));
        $countries = htmlspecialchars(trim($_REQUEST['countries']));

        echo "<h4><a href=\"http://localhost/phpai/klient.php?nazwisko=$nazwisko&wiek=$wiek&email=$email&countries=$countries\">Dane Klienta</a></h3>";
    } else {
        print("<br>Nie wpisano wszystkich danych klienta");
    }

    ?>



</body>

</html>