### PAULINE ROBLIN & LISA FREDON
## 27 oct 2025

Cloner le dépot 

cd ros2_JOUR1/ros2_ws
colcon buil 
source install/setup.bash

# Ex1 
Le publisher envoi le nom de l'ordinateur et le domaine 
Le subscriber recoit sur Topic1 les information et affiche les informations dans le terminal 
On a utilisé : rclpy.spin_once(minimal_publisher, timeout_sec=1.0) pour éviter que l'envoi se répète et on stoppe le publisher au bout d'une seconde, donc une seule information est envoyée. 

- Sur un premier terminal  : ```ros2 run exercices publisher_ex1.py```
- Sur un deuxième terminal  : ros2 run exercices subscriber_ex1.py

# Ex2
Le publisher envoi le nom de l'ordinateur et le domaine à une fréquence de 1Hz
Le subscriber recoit sur Topic1 les information et affiche les informations dans le terminal 
On a utilisé : timer_period = 1.0  # seconds
        self.timer = self.create_timer(timer_period, self.publisher_timer)
afin de régler la fréquence d'envoi à 1Hz. Le subscriber reçoit donc une information toutes les secondes.

- Sur un premier terminal  : ros2 run exercices publisher_ex2.py
- Sur un deuxième terminal  : ros2 run exercices subscriber_ex2.py

# Ex3
Par rapport à l'ex2, on a ajouté un compteur qui permet de numéroter les publications 
On a pour cela incrémenter un self.i à chaque publication.

- Sur un premier terminal  : ros2 run exercices publisher_ex3.py
- Sur un deuxième terminal  : ros2 run exercices subscriber_ex3.py

# Ex4
Pour cet exercice, nous avons créer un dossier msg qui contient le fichier ComputerInfo.msg 
Nous avons dû passer de setup.py à la création d'un CMakeLists.txt afin de configuer l'accès au fichier msg
Enfin, nous avons repris la même structure que les exercices 1 à 3 mais nous avons importé ComputerInfo 
Et nous avons d'abord écris dans le fichier msg, puis nous avons l'avons utilisé pour envoyer les informations par le publisher

- Sur un premier terminal  : ros2 run exercices publisher_ex4.py
- Sur un deuxième terminal  : ros2 run exercices subscriber_ex4.py

# Ex5
Pour ajouter un autre subscriber, nous en avons créé un nouveau dont nous avons modifié au moment de l'affichage dans le terminal : 
- le nom de l'ordinateur  : name_computer = {msg.computer_name.upper()}, 
- l'incrémentation de l'id du domaine : domain = {msg.domain_id+1}

- Faire exactement comme pour l'exercice 4 
- Sur un troisième terminal  : ros2 run exercices subscriber_ex5.py

# Ex6
Pour ajouter des paramètres, nous avons ajouter dans l'initialisation les lignes : 
- self.declare_parameter('correct_computer_name', 'student-45257')
- self.declare_parameter('correct_domain_id', 10)
Nous les avons ensuite directement récupéré et loggé dans l'initialisation pour qu'ils s'affichent uniquement au lancement 

- Dans un terminal : ros2 run exercices node_ex6.py

# Ex7
On a créé un fichier ControlClient.srv pour stocker les 4 valeurs à comparer et le résultat.
Le service reçoit ces valeurs, fait la comparaison (bon_ordi == ordi_serveur) et (bon_domain == domain_serveur) et renvoie le résultat.
Le client appelle le service pour obtenir la réponse.
Les valeurs sont déjà dans le code, donc on ne tape rien dans le terminal au lancement.

- Sur un premier terminal  : ros2 run exercices service_ex7.py
- Sur un deuxième terminal  : ros2 run exercices node_client_ex7.py
